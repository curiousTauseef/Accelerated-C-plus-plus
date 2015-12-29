#include <iomanip>
#include "Student_info.h"
using namespace std;

int main()
{

vector<Student_info> students;
Student_info record;

// Read some names in a vector
cout<<"Enter the name of some students"<< endl;
while(read(cin,record))
    students.push_back(record);

// Check what we have read so far
vector<Student_info>::size_type number_elements = students.size();
//double number_elements = students.size();
cout<< "Number of names read so far: "<< number_elements << endl;

// Printing these names ( This is the traditional way )
for (vector<Student_info>::size_type i =0; i != number_elements; i++){
cout<< students[i].name <<endl;
}


// Printing these names ( This is using iterators )
cout<<"\nPrinting using iterators" << endl;
for (vector<Student_info>::const_iterator iter = students.begin(); iter != students.end(); iter++){
//cout<< (*iter).name <<endl;
cout<< iter->name <<endl;
}

// Another way
//cout<< (*(students.begin()+1)).name <<endl;

// We can not use const_iterator here for modification
//vector<Student_info>::iterator temp = students.begin();
//temp->name = "hello";
//cout<< temp->name <<endl;

return 0;
}
