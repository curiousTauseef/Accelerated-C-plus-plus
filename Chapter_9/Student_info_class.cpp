#include "Student_info_class.h" 
using std::istream;
using std::vector;
using std::cout;
using std::endl;


// Defining constructors

Student_info::Student_info():midterm(0), final(0){}
Student_info::Student_info(istream& is){read(is);}


// Defining other functions
bool compare(const Student_info& x, const Student_info& y){
return x.name() < y.name();
}

double Student_info::grade() const{
    return ::grade(midterm, final, homework); // We should include the header file for grade here?
}


istream& Student_info::read_homework(istream& in){
if (in) {
    // get rid of previous content
    homework.clear();

    // read homework grades
    double x;
    while( in >> x)
        homework.push_back(x);
    
    in.clear();
}
return in;

}

istream& Student_info::read(istream& is){
// read and store the student's name and midterm and final exam grades
is >> n >> midterm >> final;
read_homework(is); // read and store all the student's homework grades

return is;
}


