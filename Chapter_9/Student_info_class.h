#ifndef GUARD_Student_info
#define GUARD_Student_info

#include <iostream>
#include <string>
#include <vector>
#include "grade.h"



class Student_info{
    public:
        //Constructor
        Student_info();
        Student_info(std::istream&);
        double grade() const;
        std::string name() const {return n;}
        std::istream& read(std::istream&);
        std::istream& read_homework(std::istream& in);

    private: 
        std::string n;
        double midterm, final;
        std::vector<double> homework;
};


bool compare(const Student_info& , const Student_info&);
#endif
