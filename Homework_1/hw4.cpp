#include <iostream>

using namespace std;

int main()
{
    //1.1.4. Write a program to enter the length and width of a rectangle and find its area and perimeter.
    double length, width, area, perimeter;

    cin >> length;
    cin >> width;
    
    cout << "Area = " << length * width << '\n';
    cout << "Perimeter = " << 2 * (length * width) << '\n';

    return 0;
}