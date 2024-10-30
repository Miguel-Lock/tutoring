#include <iostream>

using namespace std;

int fun() {
    int a = 10;
    int b = 5;

    a = a + b;

    return b;
}

int main() {
    int n;
    n = fun();
    cout << n;

    return 0;
}