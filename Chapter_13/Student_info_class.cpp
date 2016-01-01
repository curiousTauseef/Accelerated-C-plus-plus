#include "Student_info_class.h" 
using std::istream;
using std::vector;
using std::cout;
using std::endl;


// Defining constructors

Core::Core():midterm(0), final(0){}
Core::Core(istream& is){read(is);}

Grad::Grad():thesis(0){}
Grad::Grad(istream& is){read(is);}



// Defining other functions
bool compare(const Core& x, const Core& y){
return x.name() < y.name();
}

double Core::grade() const{
    return ::grade(midterm, final, homework); // We should include the header file for grade here?
}


istream& Core::read_homework(istream& in){
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

istream& Core::read_common(istream& is){
// read and store the student's name and midterm and final exam grades
is >> n >> midterm >> final;
return is;
}



istream& Core::read(istream& is){
// read and store the student's name and midterm and final exam grades
read_common(is);
read_homework(is); // read and store all the student's homework grades

return is;
}



// Defining functions for Grad class
istream& Grad::read(istream& is){
// read and store the student's name and midterm and final exam grades
Core::read_common(is); // Is it necessary to put scope with Core::
is >> thesis;
read_homework(is); // read and store all the student's homework grades

return is;
}

double Grad::grade() const{
    return std::min(Core::grade(), thesis);
}
