#include <iostream>
using namespace std;

int main()
{
    float power, totalLoad = 0;

    while(totalLoad <= 3000)
    {
        cout << "Enter appliance power rating (W): ";
        cin >> power;

        totalLoad += power;

        cout << "Current Total Load = "
             << totalLoad << " W" << endl;
    }

    cout << "\nLoad limit exceeded. "
         << "Do not add more appliances."
         << endl;

    cout << "Final Total Load = "
         << totalLoad << " W" << endl;

    return 0;
}