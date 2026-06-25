#include <iostream>
using namespace std;

int main()
{
    float current;

    cout << "Enter current reading: ";
    cin >> current;

    while(current <= 10)
    {
        cout << "Safe Current Reading = "
             << current << " A" << endl;

        cout << "Enter current reading: ";
        cin >> current;
    }

    cout << "\nOvercurrent detected. Monitoring stopped.";

    return 0;
}