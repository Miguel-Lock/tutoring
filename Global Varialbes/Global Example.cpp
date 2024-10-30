#include <iostream>

using namespace std;

int miguelGlobalVariable = 10;

//this cannot run
void sadFunction() {
    cout << "From sadFunction(), my local variable is: " << miguelLocalVariable << endl;
}

void funnyFunction() {
    cout << "From funnyFunction(), my global variable is: " << miguelGlobalVariable << endl;
}

int main() {
    cout << "From main, my global variable is: " << miguelGlobalVariable << endl;
    funnyFunction();

    int miguelLocalVariable = 5;
    cout << "From main, my local variable is: " << miguelLocalVariable << endl;
    sadFunction();  //this cannot run

    return 0;
}