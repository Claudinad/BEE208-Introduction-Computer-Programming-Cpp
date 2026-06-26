#include <iostream>
using namespace std;

int main()
{
    float temperature, total = 0, average;
    int count = 0;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter temperature reading "
             << i << ": ";
        cin >> temperature;

        if(temperature < 0)
        {
            cout << "Invalid reading." << endl;
            continue;
        }

        total += temperature;
        count++;
    }

    if(count > 0)
    {
        average = total / count;

        cout << "\nAverage Temperature = "
             << average << " °C";
    }
    else
    {
        cout << "\nNo valid readings.";
    }

    return 0;
}