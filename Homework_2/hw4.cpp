#include <iostream>
using namespace std;

int main()
{
    // 1.2.4 Write a program to check whether a number is even or odd.
    int a;

    cin >> a;

    if (a % 2 == 0)
    {
        cout << "Even" << '\n';
    }
    else
    {
        cout << "Odd" << '\n';
    }

    return 0;
}