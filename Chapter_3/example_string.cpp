#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main()
{

cout<<"Enter name of all the students you know"<<endl;

string x;
vector<string> names;
int count = 0;

    while(cin>>x)
    {
        ++count;
        names.push_back(x);
    }

cout<<"The final value of count is "<<count<<endl;

// Checking the number of entries in the vector
typedef vector<string>::size_type vec_sz;
vec_sz size = names.size();

cout<<"The length of the vector is "<< size <<endl;
cout<<"The first entry of the vector is "<< names[0] <<endl;
cout<<"The last entry of the vector is "<< names[size-1] <<endl;
cout<<"The entry at 10th location is "<< names[10] <<endl; // This is to check what garbage value does it provide


}
