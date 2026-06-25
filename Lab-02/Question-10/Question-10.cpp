#include <iostream>
using namespace std;

int main()
{
    float voltage;

    cout << "Enter battery voltage: ";
    cin >> voltage;

    while(voltage >= 12)
    {
        cout << "Battery Voltage = "
             << voltage << " V" << endl;

        cout << "Enter battery voltage: ";
        cin >> voltage;
    }

    cout << "\nBattery voltage low. Recharge required.";

    return 0;
}