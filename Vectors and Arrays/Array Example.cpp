/*
Miguel Lock
Version 1.0
11-17-23

This file is meant to demonstrate the use of arrays.
Note that the size of the array stays the same.
    There is no simple way to change this.
Note that if using <array>, you must pass array by reference.
*/
#include <iostream>
#include <array>

using namespace std;

//prints space-seperated values of array
template <size_t size>
void print_array(array<int, size> arr) {
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//sets all values in array to sequential values beginning at int start
template <size_t size>
void initialize_array(array<int, size> &arr, int start) {
    for (int i=0; i<size; i++) {
        arr[i] = start;
        start++;
    }
}


int main() {
    array<int, 5> myArr;
    int start = 7;

    cout << "Print array before values are set\n";
    cout << "Note that values are completely random\n";
    print_array(myArr);
    initialize_array(myArr, start);
    cout << "\n\nPrint array after values are set\n";
    cout << "Note that values start at " << start << " and are sequentially larger\n";
    print_array(myArr);

    return 0;
}