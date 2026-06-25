#include <iostream>
using namespace std;

int main()
{
    float voltage, total = 0, average;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter voltage reading " << i << ": ";
        cin >> voltage;

        total += voltage;
    }

    average = total / 10;

    cout << "\nAverage Voltage = "
         << average << " V";

    return 0;
}