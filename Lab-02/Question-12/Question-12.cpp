#include <iostream>
using namespace std;

int main()
{
    int choice;
    float voltage, current, power, resistance, time, energy;

    do
    {
        cout << "\n===== ELECTRICAL CALCULATOR =====";
        cout << "\n1. Calculate Power";
        cout << "\n2. Calculate Resistance";
        cout << "\n3. Calculate Energy";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Voltage (V): ";
                cin >> voltage;
                cout << "Enter Current (A): ";
                cin >> current;

                power = voltage * current;

                cout << "Power = "
                     << power << " W" << endl;
                break;

            case 2:
                cout << "Enter Voltage (V): ";
                cin >> voltage;
                cout << "Enter Current (A): ";
                cin >> current;

                resistance = voltage / current;

                cout << "Resistance = "
                     << resistance << " Ohms" << endl;
                break;

            case 3:
                cout << "Enter Power (W): ";
                cin >> power;
                cout << "Enter Time (h): ";
                cin >> time;

                energy = power * time;

                cout << "Energy = "
                     << energy << " Wh" << endl;
                break;

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}