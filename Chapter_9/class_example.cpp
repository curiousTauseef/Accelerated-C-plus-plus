#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "grade.h"
#include "Student_info_class.h"

using namespace std;

int main()
{

vector<Student_info> students;
Student_info first,second;
string::size_type maxlen = 0;

cout<< "Enter the name and grade of students" << endl;
while(first.read(cin)){
    maxlen = max(maxlen, first.name.size());
    students.push_back(first);
}

// Sorting the records by alphabets
sort(students.begin(), students.end(), compare);


// Write the name and the grades
for (vector<Student_info> :: size_type i = 0; i!= students.size(); i++){
    cout << students[i].name << string(maxlen + 1 - students[i].name.size(),' ');

    try{
        double final_grade = students[i].grade();
        streamsize prec = cout.precision();
        cout << setprecision(3) << final_grade << setprecision(prec);
    }
    catch (domain_error e){
        cout << e.what();
    }

    cout << endl;
}
return 0;

}




/*
// Read the name of the student and grades
cout<< "Enter the name of the first student followed by his midterm grade, final grade and homework grades" << endl;
first.read(cin);

// Compute and display his performance
cout << "The grade of " << first.name << " is: " << first.grade() << endl;

cout<< "Enter the name of the second student followed by his midterm grade, final grade and homework grades" << endl;
second.read(cin);

// Compute and display his performance
cout << "The grade of " << second.name << " is: " << second.grade() << endl;
*/


