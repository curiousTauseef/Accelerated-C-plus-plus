#include <iostream>
using namespace std;

int* wrong_way()
{
int a = 10;
return &a;
}

int* correct_way()
{
static int c = 15; // This initialization happens only once, and later on the second call we do not execute this
return &c;
}



int main()
{

int *b = wrong_way(); // This is not the right way, but the value would still be there at the address right?
cout << "The value at the location is " << *b << endl;

int *c = correct_way(); 
cout << "The value at the location is " << *c << endl;

*c = *c + 1;
cout << "The value at the location is " << *c << endl;
cout << "The value at the next call " << *(correct_way()) << endl;

return 0;
}
