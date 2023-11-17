/*
Miguel Lock
Version 1.0
11-17-23

Demonstraits that when you pass an array into a function,
    you are acutally passing a pointer of that array into
    the function
This file uses <array>.
*/

/*
Remember: when you pass an array into a function, you are
actually passing a poinnter of that array into the function
*/
#include <iostream>
#include <array>

using namespace std;

template <size_t N>
void add_10(array<int, N>& arr) {
    for (int i=0; i<N; i++) {
        arr[i] += 10;
    }
}

int main() {
    const int length = 3;
    
    //create array myArr with values [4, 5, 6]
    array<int, length> myArr = {4, 5, 6};

    cout << "Printing array myArray before calling add_10()" << endl;
    for (int i=0; i<length; i++) {
        cout << myArr[i] << " ";
    }
    cout << endl;

    //calls function
    add_10(myArr);

    cout << "Printing array myArray after calling add_10()" << endl;
    for (int i=0; i<length; i++) {
        cout << myArr[i] << " ";
    }
    cout << endl << endl;

    return 0;
}