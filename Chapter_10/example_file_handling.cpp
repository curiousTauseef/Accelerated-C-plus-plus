#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

//ifstream infile("in");
ofstream outfile("out");

string s;

while(getline(cin,s)){  // Replace cin with infile to read a file
    outfile << s << endl;
}


}
