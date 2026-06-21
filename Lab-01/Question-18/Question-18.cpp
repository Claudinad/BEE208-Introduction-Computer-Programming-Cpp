#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long binaryNum;
    int decimalNum = 0, i = 0, remainder;

    cout << "Enter a binary number: ";
    cin >> binaryNum;

    while (binaryNum != 0) {
        remainder = binaryNum % 10;
        decimalNum += remainder * pow(2, i);
        binaryNum /= 10;
        i++;
    }

    cout << "Decimal equivalent = " << decimalNum << endl;

    return 0;
}