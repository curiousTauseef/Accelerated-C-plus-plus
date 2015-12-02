#include <iostream>

using namespace std;
int main(){

clog << "Begin Logging" << endl;

cout << "Printing numbers" << endl;
for (int i=0; i!=10; i++)
    cout<< i ;
cout<< endl;


clog << "Program finished" << endl;

}


// ./example_output_error_stream 2>log.txt 
// ./example_output_error_stream >text.txt 2>&1 Redirects stderr to stdout  
