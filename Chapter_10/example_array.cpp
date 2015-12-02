#include <iostream>
#include <vector>

using namespace std;

int main(){

const size_t Ndim = 3;
double coords[Ndim] = {0,9,11};

// Getting the size of the array
const size_t size_arr = sizeof(coords)/sizeof(*coords);

// Accessing different elements
cout<< "The value at the first element is " << *coords << endl;
cout<< "The size of the array is " << size_arr << endl;
cout<< "The value of the last element is " << *(coords + size_arr - 1 ) << endl;
cout<< "(Another Way) The value of the last element is " << coords[size_arr - 1] << endl;

// Initializing the vector with the array
vector <double> coords_vec(coords, coords + size_arr); // Important, it takes the begin and 1 after the end of the array.
cout << "The size of the vector is " << coords_vec.size() << endl;

// Printing the vector
for (vector<double>::const_iterator iter = coords_vec.begin(); iter != coords_vec.end(); ++iter)
    cout << *iter << " " ;
cout<< endl;

// Giving a pointer to the first element of the array and using it to manipulate the original array
double *temp = coords;
*(temp+2) = 25;
cout << *(temp+2) << endl;

}
