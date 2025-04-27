#include <iostream>

using namespace std;

int main()
{
    // 1.2.5 Write a program to check whether a year is a leap year or not.
    int year;

    cin >> year;

    if (year % 4 == 0 || year % 100 == 0)
    {
        cout << "Leap year" << '\n';
    }
    else
    {
        cout << "Not leap year" << '\n';
    }

    return 0;
}