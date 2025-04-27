#include <iostream>

using namespace std;

int main()
{
    // 1.2.2 Write a program to check whether a number is negative, positive or zero.
    int a;

    cin >> a;

    if (a < 0)
    {
        cout << "Negative" << '\n';
    }
    else if (a > 0)
    {
        cout << "Positive" << '\n';
    }
    else
    {
        cout << "Zero" << '\n';
    }

    return 0;
}