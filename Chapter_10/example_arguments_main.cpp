#include <iostream>

using namespace std;

int main(int argc, char** argv){

cout << "Welcome to this program" << endl;
cout << "You have entered " << argc-1 << " arguments" << endl;

// Printing them
//cout << argv[1] << endl;

for (int i=1; i != argc; i++)
    cout << argv[i] << endl; 

}
