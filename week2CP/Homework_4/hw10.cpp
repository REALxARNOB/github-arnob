#include <iostream>

using namespace std;

void gcd()
{
    int a, b, gcd;
    cin >> a >> b;
    for (int i = 1; i <= b; ++i)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    cout << gcd << endl;
}

int main()
{
    // Write a Function to calculate the Greated Common Divisor (GCD) of two numbers
    // Input: 12 18
    // Output: 6
    gcd();
    return 0;
}