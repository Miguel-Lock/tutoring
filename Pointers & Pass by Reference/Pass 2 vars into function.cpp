/*
Miguel Lock
Version 1.0
11-17-23

This file is meant to demonstrate the use of variables.
It demonstrates what happens if you pass two variables
    into a function and edit their values.
*/
#include <iostream>

using namespace std;

int fun(int a, int b) {
    cout << "\n\nIn function fun() before operations\n";
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    a = a + 10;
    b = b + 10;

    cout << "\n\nIn function fun() after operations. Will return a.\n";
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return a;
}

int main() {
    int firstVar = 1;
    int secondVar = 2;
    int result = 0;

    cout << "Variables in main before calling fun(firstVar, secondVar):\n";
    cout << "firstVar: " << firstVar << endl;
    cout << "secondVar: " << secondVar << endl;
    cout << "result: " << result << endl;

    result = fun(firstVar, secondVar);

    cout << "\n\nVariables in main after calling fun(firstVar, secondVar):\n";
    cout << "firstVar: " << firstVar << endl;
    cout << "secondVar: " << secondVar << endl;
    cout << "result: " << result << endl;

    return 0;
}