#ifndef GUARD_Student_info
#define GUARD_Student_info

#include <iostream>
#include <string>
#include <vector>
#include "grade.h"



class Student_info{
    public:
        double grade() const;
        std::istream& read(std::istream&);
        std::istream& read_homework(std::istream& in);
        std::string name;

    private: 
        double midterm, final;
        std::vector<double> homework;
};


bool compare(const Student_info& , const Student_info&);
#endif
