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

cout<<"The final value of count is "<<count<<endl;

// Checking the number of entries in the vector
typedef vector<double>::size_type vec_sz;
vec_sz size = homework.size();

cout<<"The length of the vector is "<< size <<endl;
cout<<"The first entry of the vector is "<< homework[0] <<endl;
cout<<"The last entry of the vector is "<< homework[size-1] <<endl;
cout<<"The entry at 10th location is "<< homework[10] <<endl; // This is to check what garbage value does it provide


}
