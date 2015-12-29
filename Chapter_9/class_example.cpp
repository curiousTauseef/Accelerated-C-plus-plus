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
Student_info record;
string::size_type maxlen = 0;

cout<< "Enter the name and grade of students" << endl;
while(record.read(cin)){
    maxlen = max(maxlen, record.name().size());
    students.push_back(record);
    
    // We will modfiy the name illegaly over here since we have the reference to the private part
    cout << record.name_ref() << endl;
    *record.name_ref() = "erased" ;
    //record.name_ref() = "erased" ;
    cout <<  record.name() << endl; 
}

// Sorting the records by alphabets
sort(students.begin(), students.end(), compare);


// Write the name and the grades
for (vector<Student_info> :: size_type i = 0; i!= students.size(); i++){
    cout << students[i].name() << string(maxlen + 1 - students[i].name().size(),' ');

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




