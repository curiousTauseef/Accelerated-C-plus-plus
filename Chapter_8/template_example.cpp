#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>

using namespace std;
// We will define the median function over here

double median(vector<double>& data){
    
    typedef vector<double>::size_type vec_sz;
    vec_sz size = data.size();
    
    // Check we have read something
    if(size == 0)
        throw domain_error("Median of an empty vector");

    // First we will sort the array
    sort(data.begin(), data.end());
    
    vec_sz mid = size/2;
    return size % 2 == 0 ? (data[mid] + data[mid-1])/2 : data[mid] ;
}


// Median function using templates
template <class T>
T median_template(vector<T>& data){
    typedef typename vector<T>::size_type vec_sz;
    vec_sz size = data.size();
    
    // Check we have read something
    if(size == 0)
        throw domain_error("Median of an empty vector");

    // First we will sort the array
    sort(data.begin(), data.end());
    
    vec_sz mid = size/2;
    return size % 2 == 0 ? (data[mid] + data[mid-1])/2 : data[mid] ;
}


void print_array(vector<double>& data){
    for (vector<double>::const_iterator iter = data.begin(); iter != data.end(); iter++)
        cout<< *iter << " " ;
    cout<< endl;
}



int main(){

cout<< "Enter the elements for the vector" << endl;
vector<double> temp_array;
double x;

while(cin>>x)
    temp_array.push_back(x);

cout<<"The number of entries recorded are "<< temp_array.size() << endl;
cout << "The median of the entries computed with template is " <<  median_template(temp_array) << endl;
cout << "The median of the entries is " <<  median(temp_array) << endl;

// Print the array now, should be sorted
//print_array(temp_array);

}
