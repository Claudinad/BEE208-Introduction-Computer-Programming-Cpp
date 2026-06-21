#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    int decimal = 0;

    cout << "Enter a binary number: ";
    cin >> binary;

    // Convert binary to decimal
    for (char bit : binary) {
        decimal = decimal * 2 + (bit - '0');
    }

    cout << "Decimal: " << decimal << endl;

    // Convert decimal to hexadecimal
    cout << "Hexadecimal: " << hex << uppercase << decimal << endl;

    // Convert decimal to octal
    cout << "Octal: " << oct << decimal << endl;

    return 0;
}