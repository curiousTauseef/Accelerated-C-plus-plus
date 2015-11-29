#include "fish.h"
#include <string>
#include <iostream>


std::istream& fish::read_name(std::istream& is){
is >> name;
//is.clear(); // The program works without this as well.
return is;
}
