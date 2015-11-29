#include<iostream>
#include<string>
using namespace std;

int main()
{

string name;
cout<<"Enter your name"<<endl;
cin>>name;

cout<<"Hello "<<name<<"!"<<endl;
cout<<"Hello "<<name<<":"<<name.length()<<endl;
/*
const string hello = "hello";
const string message = hello + '!' + name;
cout<<message<<endl;

const string greet(6,'*');
cout<<greet<<endl;
*/

}
