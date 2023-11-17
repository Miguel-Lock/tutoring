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

void fun(int firstVar, int secondVar) {
    firstVar = firstVar + 10;
    secondVar = secondVar + 10;
}

int main() {
    int var1 = 1;
    int var2 = 2;

    cout << "Variables in main before calling fun(var1, var2):\n";
    cout << "var1: " << var1 << endl;
    cout << "var2: " << var2 << endl;

    fun(var1, var2);

    cout << "\n\nVariables in main after calling fun(var1, var2):\n";
    cout << "var1: " << var1 << endl;
    cout << "var2: " << var2 << endl;

    return 0;
}