#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Input two integers
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    // Calculate and display results
    cout << "\nSum = " << num1 + num2 << endl;
    cout << "Difference = " << num1 - num2 << endl;
    cout << "Product = " << num1 * num2 << endl;

    // Check for division by zero
    if (num2 != 0) {
        cout << "Quotient = " << static_cast<double>(num1) / num2 << endl;
    } else {
        cout << "Quotient = Undefined (cannot divide by zero)" << endl;
    }

    return 0;
}