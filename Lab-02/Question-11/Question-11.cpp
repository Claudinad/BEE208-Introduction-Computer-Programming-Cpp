#include <iostream>
using namespace std;

int main()
{
    int password;

    cout << "Enter password: ";
    cin >> password;

    while (password != 2080)
    {
        cout << "Incorrect password. Try again." << endl;
        cout << "Enter password: ";
        cin >> password;
    }

    cout << "Access granted to control panel." << endl;

    return 0;
}