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
Grad shreyas;
vector<Core*> students;                             // Changed here
Core* record;
string::size_type maxlen = 0;

cout<< "Enter the name and grade of students" << endl;

char ch;
while(cin >> ch){                                    // Changed here
    if(ch == 'U')
        record = new Core;
    else
        record = new Grad;

    record->read(cin);                           // Changed here
    maxlen = max(maxlen, record->name().size());     // Changed here
    students.push_back(record);

/*  // Debug We can not call a function from derived class here if it is not shared
    // with the base class, thesis_score() in this case?
    if(ch != 'U'){
        cout << "The grade in thesis is" << record->thesis_score() << endl;
        cout << "The name of the student is " << record->name() << endl;
    }
*/
}

// Sorting the records by alphabets
//sort(students.begin(), students.end(), compare);

cout << "Number of students registered are " << students.size()<< endl;

// Write the name and the grades
for (vector<Core*> :: size_type i = 0; i!= students.size(); i++){
    cout << students[i]->name() << string(maxlen + 1 - students[i]->name().size(),' '); // Changed here

    try{
        double final_grade = students[i]->grade();         // Changed here
        streamsize prec = cout.precision();
        cout << setprecision(3) << final_grade << setprecision(prec);
    }
    catch (domain_error e){
        cout << e.what();
    }

    cout << endl;
    
    // Freeing the memory
    delete students[i];                                 // Changed here
}
return 0;

}




