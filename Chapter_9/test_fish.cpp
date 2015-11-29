#include "fish.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

    cout<< "Welcome to this program" << endl;
    cout<< "Let us play with some fishes" << endl;
    fish temp, temp2;
    cout<< "Enter the name of the fish" << endl;
    temp.read_name(cin);
    cout<< "Hello Fish: " << temp.name << endl;
    cout<< "Enter the name of the second fish" << endl;
    temp2.read_name(cin);
    cout<< "Hello Fish: " << temp2.name << endl;



}
