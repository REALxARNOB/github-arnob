#include <iostream>

using namespace std;

int main()
{
    //1.1.7. Write a program to convert days into years, weeks and days.
    int days;

    cin >> days;

    cout << "Years = " << days / 365 << '\n';
    cout << "Weeks = " << (days % 365) / 7 << '\n';
    cout << "Days = " << (days % 365) % 7 << '\n';

    return 0;
}