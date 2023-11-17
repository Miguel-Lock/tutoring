/*
Miguel Lock
Version 1.0
11-17-23

This file is meant to demonstrate the use of vectors.
Note that the size of the vector is variable.
Note that the vector must be passed by reference
*/
#include <iostream>
#include <vector>

using namespace std;

//prints space-seperated values of vector
void print_vector(vector<int> miggyVector) {
    cout << "[ ";
    for (int i=0; i<miggyVector.size(); i++) {
        cout << miggyVector[i] << " ";
    }
    cout << "]" << endl;
}

//sets all values in array to sequential values beginning at int start
void initialize_vector_by_value(vector<int> miggyVector, int start, int size) {
    for (int i=0; i<size; i++) {
        miggyVector.push_back(start);
        start++;
    }
}

//sets all values in array to sequential values beginning at int start
void initialize_vector_by_reference(vector<int> &miggyVector, int start, int size) {
    for (int i=0; i<size; i++) {
        miggyVector.push_back(start);
        start++;
    }
}


int main() {
    vector<int> myVector;
    int start = 7;
    int size = 10;

    cout << "Here is the vector before it is initialized:\n";
    print_vector(myVector);

    initialize_vector_by_value(myVector, start, size);
    cout << "\nHere is the vector. It was passed by value into a funciton and initilized:\n";
    print_vector(myVector);

    initialize_vector_by_reference(myVector, start, size);
    cout << "\nAs you can see, passing by value did not work. Here is the vector after\n";
    cout << "being passed into a function that is identicle, but it passes by reference:\n";
    print_vector(myVector);

    return 0;
}