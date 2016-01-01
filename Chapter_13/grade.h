#ifndef GUARD_grade_h
#define GUARD_grade_h

#include<vector>
//#include "Student_info.h"
#include "Student_info_class.h"

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
//double grade(const Student_info_class&);  // This is the one we are actually going to use in the current program so we will write this only

#endif
