#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;




int main(){

string name;

cout << "Enter your name" << endl;
getline(cin,name) ;
const char* temp_name = name.c_str();

//size_t size_name;


//cout << "Hello " << name <<", the number of characters in your name are "<< strlen(temp_name) << endl;
cout << "Hello " << name <<", the number of characters in your name are "<< name.size() << endl;
cout << "Hello " << temp_name <<", the number of characters in your name are "<< strlen(temp_name) << endl;
cout << "Hello " << temp_name <<", the number of characters in your name are "<< sizeof(temp_name)/sizeof(*temp_name) << endl; // This is problematic for strings with spaces, but only in this case :/ 


char temp [] = {"shreyas saxena"};
cout <<"The name is:" <<temp << endl;
cout << sizeof(temp)/sizeof(*temp) << endl;
cout << strlen(temp) << endl;

}
