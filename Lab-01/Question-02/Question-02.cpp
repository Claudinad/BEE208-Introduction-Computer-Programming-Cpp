#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius, area;
    const double PI = 3.14159;

    // Input radius
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate area
    area = PI * pow(radius, 2);

    // Display result
    cout << "The area of the circle is: " << area << endl;

    return 0;
}
