#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main()
{

cout<<"Enter all your homework grades "
    "followed by the end of file"<<endl;

double x,sum;
vector<double> homework;
int count = 0;
    while(cin>>x)
    {
        ++count;
        homework.push_back(x);
        sum += x;
    }

// Checking the number of entries in the vector
typedef vector<double>::size_type vec_sz;
vec_sz size = homework.size();

cout<<"The length of the vector is "<< size <<endl;
cout<<"The first entry of the vector is "<< homework[0] <<endl;

// We will play with editing the entries of the vector
double original_value = homework[0];
homework[0] = 11;
cout<<"The first entry after modification is "<< homework[0] <<endl;

// Copying the vector using a reference
vector<double>& copy_hw = homework;

copy_hw[0] = original_value;
cout<<"The first entry after resetting via reference is "<< homework[0] <<endl;

// Copying the vector using a const reference 
const vector<double>& copy_hw_fix = homework;
// It will throw an compilation error if we try to modify this object


}
