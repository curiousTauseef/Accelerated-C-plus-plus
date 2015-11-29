#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "grade.h"

using namespace std;

int main()
{

vector<Student_info> students;
Student_info record;

string::size_type maxlen = 0; // the length of the longest name
// Read and store all the student's data
// Invariant: students contain all the student records read so far 
// maxlen contains the lenght of longest name in students
while(read(cin,record)){
    // find length of longest name
    maxlen = max(maxlen, record.name.size());
    students.push_back(record);
}

// alphabetize the student records
sort(students.begin(), students.end(), compare);

// write the names and the grades
for (vector<Student_info> :: size_type i = 0; i != students.size(); ++i)
{

// Write the name, padded on the right to maxlen + 1 characters
cout<< students[i].name << string(maxlen + 1 - students[i].name.size(),' ');

// Compute and write the grade
try {

double final_grade = grade(students[i]);
//double final_grade = 0;
streamsize prec = cout.precision();
cout << setprecision(3) << final_grade << setprecision(prec);

} catch (domain_error e){
cout<< e.what();
}
cout<< endl;

}
return 0;

}
