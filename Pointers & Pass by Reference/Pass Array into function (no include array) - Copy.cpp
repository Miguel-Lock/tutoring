/*
Miguel Lock
Version 1.0
11-17-23

Demonstraits that when you pass an array into a function,
    you are acutally passing a pointer of that array into
    the function
This file DOES NOT USE <array>.
*/
#include <iostream>

using namespace std;

void add_10(int arr[], int len) {
    for (int i=0; i<len; i++) {
        arr[i] += 10;
    }
}


int main() {
    const int length = 3;

    //create array myArr with values [1, 2, 3]
    int myArr[length] = {1, 2, 3};

    cout << "Printing array myArr before calling add_10()" << endl;
    for (int i=0; i<length; i++) {
        cout << myArr[i] << " ";
    }
    cout << endl;

    //calls function
    add_10(myArr, length);

    cout << "Printing array myArr after calling add_10()" << endl;
    for (int i=0; i<length; i++) {
        cout << myArr[i] << " ";
    }
    cout << endl << endl;

    return 0;
}