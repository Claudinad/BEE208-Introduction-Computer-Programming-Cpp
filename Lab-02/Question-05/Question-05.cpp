#include <iostream>
using namespace std;

int main()
{
    int choice;
    float voltage, current, power, resistance, time, energy;

    cout << "1. Calculate DC Power\n";
    cout << "2. Calculate Resistance\n";
    cout << "3. Calculate Energy Consumption\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Enter Voltage: ";
            cin >> voltage;
            cout << "Enter Current: ";
            cin >> current;

            power = voltage * current;

            cout << "Power = " << power << " W";
            break;

        case 2:
            cout << "Enter Voltage: ";
            cin >> voltage;
            cout << "Enter Current: ";
            cin >> current;

            resistance = voltage / current;

            cout << "Resistance = " << resistance << " Ohms";
            break;

        case 3:
            cout << "Enter Power: ";
            cin >> power;
            cout << "Enter Time: ";
            cin >> time;

            energy = power * time;

            cout << "Energy = " << energy << " Wh";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}