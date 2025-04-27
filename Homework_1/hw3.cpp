#include <iostream>

using namespace std;

int main()
{
    //1.1.3. Write a program to enter two integer numbers and display their sum, difference and multiplication value.
    int a, b;

    cin >> a;
    cin >> b;

    cout << "Sum = " << a + b << '\n';
    cout << "difference = " << a - b << '\n';
    cout << "Multiplication = " << a * b << '\n';

    return 0;

}