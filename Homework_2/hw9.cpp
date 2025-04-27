#include <iostream>

using namespace std;

int main()
{
    // 1.2.9 Write a program to find CGPA, given the course, credit hours and obtained number.
    float ch, num;

    cin >> ch;
    cin >> num;

    if (num > 79)
    {
        cout << "CGPA = " << (ch * 4.0) / ch << '\n';
    }
    else if (num > 74)
    {
        cout << "CGPA = " << (ch * 3.75) / ch << '\n';
    }
    else if (num > 69)
    {
        cout << "CGPA = " << (ch * 3.50) / ch << '\n';
    }
    else if (num > 64)
    {
        cout << "CGPA = " << (ch * 3.25) / ch << '\n';
    }
    else if (num >59)
    {
        cout << "CGPA = " << (ch * 3.0) / ch << '\n';
    }
    else if (num > 54)
    {
        cout << "CGPA = " << (ch * 2.75) / ch << '\n';
    }
    else if (num > 49)
    {
        cout << "CGPA = " << (ch * 2.50) / ch << '\n';
    }
    else if (num > 44)
    {
        cout << "CGPA = " << (ch * 2.25) / ch << '\n';
    }
    else if (num > 39)
    {
        cout << "CGPA = " << (ch * 2.0) / ch << '\n';
    }
    else
    {
        cout << "Fail" << '\n';
    }

    return 0;
}