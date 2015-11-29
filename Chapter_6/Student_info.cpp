#include "Student_info.h" // Will paste the contents of the header file here! So we do not have to reinclude the libraries here.
using std::istream;
using std::vector;
using std::cout;
using std::endl;

bool compare(const Student_info& x, const Student_info& y){
return x.name < y.name;
}


istream& read(istream& is, Student_info& s){
// read and store the student's name and midterm and final exam grades
is >> s.name >> s.midterm >> s.final;
read_hw(is, s.homework); // read and store all the student's homework grades

return is;
}


istream& read_hw(istream& in, vector<double>& hw){
if (in) {
    // get rid of previous content
    hw.clear();

    // read homework grades
    double x;
    while( in >> x)
        hw.push_back(x);

    // clear the stream so that input will work for the next student
    //cout<< "We did not clear the stream" <<endl;
    in.clear();
}
return in;

}



