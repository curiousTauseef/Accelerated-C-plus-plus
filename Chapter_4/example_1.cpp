#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_vector_reference(vector<double>& temp)
{

double size = temp.size();
for (int i=0; i<size; i++)
{
cout<<temp[i]<<endl;
}

}

void print_vector_value(vector<double> temp)
{

double size = temp.size();
for (int i=0; i<size; i++)
{
cout<<temp[i]<<endl;
}

}




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

// Copying the vector using a reference
vector<double>& copy_hw = homework;

// Printing the entries of vector
print_vector_reference(homework); //  pass by reference 
print_vector_value(copy_hw);   // pass by value but a reference

}
