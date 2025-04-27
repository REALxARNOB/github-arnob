#include <iostream>

using namespace std;

int main()
{
    //1.1.5. Write a program to enter the radius of a circle and find its diameter, circumference and area.
    double radius, diameter, circumference, area;

    cin >> radius;

    cout << "Diameter = " << 2 * radius << '\n';
    cout << "Circumference = " << 2 * 3.1416 * radius << '\n';
    cout << "Area = " << 3.1416 * radius * radius << '\n';

    return 0;
}