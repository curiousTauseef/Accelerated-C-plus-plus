#include <iostream>

using namespace std;

void next(int &i){
i = i + 1;
}




int main(){
int x;
void (*fp) (int&);
cout << "Enter a value in the system" << endl;
cin >> x;

fp = &next;
(*fp)(x);
cout << "The incremented value is " << x << endl;

// Another way
fp = next;
fp(x);
cout << "The incremented value is " << x << endl;



}
