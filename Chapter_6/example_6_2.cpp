#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <numeric>
#include "grade.h"
#include "median.h"
#include "analysis.h"

using namespace std;


bool did_all_hw(const Student_info& record){
    // This condition is only true for people who did the homework
    vector<double>::const_iterator index_return = find(record.homework.begin(), record.homework.end(), 0 );
    return(index_return == record.homework.end());
}



int main()
{
vector<Student_info> students_did;
vector<Student_info> students_didnt;
Student_info record;

string::size_type maxlen = 0; // the length of the longest name
// Read and store all the student's data
// Invariant: students contain all the student records read so far 

while(read(cin,record)){
    if(did_all_hw(record))
        students_did.push_back(record);
    else
        students_didnt.push_back(record);
}

cout<< "Number of students registered "<< students_did.size() + students_didnt.size()<< endl;
cout<<"The students who submitted all homework "<< students_did.size()<<endl;
cout<<"The students who did not submit all homework "<< students_didnt.size()<<endl;

cout<< "------------------------------" << endl;
cout<< "\n Performing analysis " << endl;
cout<< "------------------------------" << endl;

// Do the analyses of different grading schemes
write_analysis(cout, "Median", median_analysis, students_did, students_didnt);
write_analysis(cout, "Average", average_analysis, students_did, students_didnt);
write_analysis(cout, "Optimistic median analysis", optimistic_median_analysis, students_did, students_didnt);

return 0;

}




