#ifndef GUARD_Student_info
#define GUARD_Student_info

#include <iostream>
#include <string>
#include <vector>

struct Student_info{
    std::string name;
};

std::istream& read(std::istream&, Student_info&);

#endif
