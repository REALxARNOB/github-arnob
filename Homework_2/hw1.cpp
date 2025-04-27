#include <iostream>

using namespace std;

int main()
{
    //1.2.1 Write a program to find the maximum between three numbers.
    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    if (a > b && a > c)
    {
        cout << "Greatest = a" << '\n';
    }
    else if (b > a && b > c)
    {
        cout << "Greatest = b" << '\n';
    }
    else
    {
        cout << "Greatest = c" << '\n';
    }

    return 0;
}