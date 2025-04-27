#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //1.1.11. Write a program to calculate the area of an equilateral triangle.
    float side;

    cin >> side;

    cout << "Area of equilateral triangle = " << (sqrt(3) * side * side) / 4 << '\n';

    return 0;
}