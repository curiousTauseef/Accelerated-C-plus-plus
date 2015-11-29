#include "analysis.h"
#include <iomanip>
#include <iostream>
#include <numeric>
#include <string>

#include "grade.h"
#include "median.h"

using namespace std;



// Consider writing these functions in a different header file
void write_analysis(ostream& out, const string& name, double analysis( const vector<Student_info>& ), 
                                    const vector<Student_info>& did, const vector<Student_info>& didnt){
    out << name << ":median(did) = "<< analysis(did)  << ",median(didnt) = "<< analysis(didnt) << endl;
}

// Case where the net homework grade depends upon the median
double grade_aux(const Student_info& s){
    //  Try in case student submitted no homework 
    try{ 
        return grade(s);
    }
    catch (domain_error){
        return grade(s.midterm, s.final, 0);  // Homework is assigned as zero
    }
}

double median_analysis(const vector<Student_info>& students){
    vector<double> grades;
    transform(students.begin(), students.end(), back_inserter(grades), grade_aux);
    return median(grades);
}


// Case where the net homework grade depends upon the average
double average(const vector<double>& v){
    return accumulate(v.begin(), v.end(), 0.0) / v.size() ; // What would happen here if the size of homework vector is 0? Should we put a catch?
}

double average_grade(const Student_info& s){
    return grade(s.midterm, s.final, average(s.homework));
}

double average_analysis(const vector<Student_info>& students){
    vector<double> grades;
    transform(students.begin(), students.end(), back_inserter(grades), average_grade);

    return median(grades);
}

// Case where the net homework grade depends on the median of only submitted homework
double optimistic_median(const Student_info& s){

    // We have to remove the empty elements from the homework
    vector<double> non_zero;
    remove_copy(s.homework.begin(), s.homework.end(), back_inserter(non_zero), 0); // Should this be 0.0 ?

    // If all homework grades were 0
    if(non_zero.empty())
        return grade(s.midterm, s.final, 0);
    else
        return grade(s.midterm, s.final, median(non_zero));

}

double optimistic_median_analysis(const vector<Student_info>& students){
    vector<double> grades;
    transform(students.begin(), students.end(), back_inserter(grades), optimistic_median);

    return median(grades);
}
