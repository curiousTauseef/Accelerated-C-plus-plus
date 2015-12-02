#include <iostream>

using namespace std;

int main(){
int x;
int *p = &x;

cout << "Enter a value in the system" << endl;
cin >> x;

*p = 10;
cout << "The replace value is " << x << endl;

cout << "The address of x is " << &x << endl;
cout << "The value of p is " << p << endl;

}
