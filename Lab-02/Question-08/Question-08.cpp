#include <iostream>
using namespace std;

int main()
{
    float current;
    int safeCount = 0;
    int unsafeCount = 0;

    for(int i = 1; i <= 8; i++)
    {
        cout << "Enter current reading " << i << ": ";
        cin >> current;

        if(current <= 10)
            safeCount++;
        else
            unsafeCount++;
    }

    cout << "\nSafe Readings = "
         << safeCount;

    cout << "\nUnsafe Readings = "
         << unsafeCount;

    return 0;
}