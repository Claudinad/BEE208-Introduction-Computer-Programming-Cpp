#include <iostream>
using namespace std;

int main() {
    int firstValue, secondValue;

    cout << "Enter two integers: ";
    cin >> firstValue >> secondValue;

    if (firstValue > secondValue) {
        cout << "First value is greater" << endl;
    } else {
        cout << "Second value is greater" << endl;
    }

    return 0;
}