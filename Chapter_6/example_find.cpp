#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

using namespace std;

/*
bool did_all_hw(const Student_info& record){
    // This condition is only true for people who did the homework
    vector<double>::const_iterator index_return = find(record.homework.begin(), record.homework.end(), 0 );
    cout<< "The value of 0th element is "<<*index_return<<endl;
    return(index_return == record.homework.end());
}
*/

int main()
{
vector<double> records = {10, 30, 40, 50};
cout << "The size of the vector is " << records.size()<< endl;

// We want to find the value or the index of element 30
vector<double>::iterator iter = find(records.begin(), records.end(), 100);
cout << "The value at this location is "<<*iter << endl;
cout << "The value at start is "<<*records.begin() << endl;
cout << "The value at end is "<<*(records.end() -1 ) << endl;


return 0;

}
