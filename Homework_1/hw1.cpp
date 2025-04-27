#include <iostream>

using namespace std;

int main()
{
    //1.1.1. Write a program to take input and display an integer number, a fraction number, a character and a boolean.
    int a;
    float b;
    char c;
    bool d;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    
    cout << "Integer = " << a << '\n';
    cout << "Float = " << b << '\n';
    cout << "Character = " << c << '\n';
    if (d == 1)
    {
        cout << "Boolean = True" << '\n';
    }
    else if (d == 0)
    {
        cout << "Boolean = False" << '\n';
    }
    else
    {
        cout << "Boolean = Error!" << '\n';
    }

    return 0;
}