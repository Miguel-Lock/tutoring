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

int fun(int a, int *miguelPtr) {
    cout << "\n\nIn function fun() before operations\n";
    cout << "a: " << a << endl;
    cout << "*miguelPtr: " << *miguelPtr << endl;

    a = a + 10;
    *miguelPtr = *miguelPtr + 10;

    cout << "\n\nIn function fun() after operations. Will return a.\n";
    cout << "a: " << a << endl;
    cout << "*miguelPtr: " << *miguelPtr << endl;

    return a;
}

int main() {
    int myVar = 1;
    int *myPtr = new int(2);
    int myResult = 0;

    cout << "Variables in main before calling fun(myVar, *myPtr):\n";
    cout << "myVar: " << myVar << endl;
    cout << "myPtr: " << *myPtr << endl;
    cout << "myResult: " << myResult << endl;

    myResult = fun(myVar, myPtr);

    cout << "\n\nVariables in main after calling fun(myVar, *myPtr):\n";
    cout << "myVar: " << myVar << endl;
    cout << "*myPtr: " << *myPtr << endl;
    cout << "myResult: " << myResult << endl;

    return 0;
}