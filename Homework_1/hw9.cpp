#include <iostream>

using namespace std;

int main()
{
    //1.1.10. Write a program to enter two angles of a triangle and find the third angle.
    float a, b;

    cin >> a;
    cin >> b;

    cout << "Third angle = " << 180 - (a + b) << '\n';

    return 0;
}