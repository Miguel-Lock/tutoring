/*
Miguel Lock
Version 1.0
11-17-23

This file is meant to demonstrate the use of pointers.
It demonstrates what happens if you pass a variable 
    and a pointer into a function and edit their values.
*/
#include <iostream>

using namespace std;

void fun(int *firstPtr, int *secondPtr) {
    *firstPtr = *firstPtr + 10;
    *secondPtr = *secondPtr + 10;
}

int main() {
    int *ptr1 = new int(1);
    int *ptr2 = new int(2);

    cout << "Variables in main before calling fun(*ptr1, *ptr2):\n";
    cout << "*ptr1: " << *ptr1 << endl;
    cout << "*ptr2: " << *ptr2 << endl;

    fun(ptr1, ptr2);

    cout << "\n\nVariables in main after calling fun(*ptr1, *ptr2):\n";
    cout << "*ptr1: " << *ptr1 << endl;
    cout << "*ptr2: " << *ptr2 << endl;

    return 0;
}