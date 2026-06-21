#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Swap using XOR operator
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}