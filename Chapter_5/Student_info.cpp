#include "Student_info.h" // Will paste the contents of the header file here! So we do not have to reinclude the libraries here.
using namespace std;


istream& read(istream& is, Student_info& s){
// read and store the student's name and midterm and final exam grades

is >> s.name;
//cout << "Printing the content " << s.name << endl; // Just to check what is there

return is;
}




