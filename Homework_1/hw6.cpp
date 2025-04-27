#include <iostream>

using namespace std;

int main()
{
    //1.1.6. Write a program to enter temperature in Celsius and convert it into Fahrenheit.
    float celcius;

    cin >> celcius;

    cout << "Fahrenheit = " << ((celcius * 9) / 5) + 32 << '\n';

    return 0;
}