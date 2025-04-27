#include <iostream>

using namespace std;

int main()
{
    // 1.2.3 Write a program to check whether a number is divisible by 5 and 11 or not.
    int a;

    cin >> a;

    if (a % 5 == 0 && a % 11 == 0)
    {
        cout << "Divisible" << '\n';
    }
    else
    {
        cout << "Not divisiblr" << '\n';
    }

    return 0;
}