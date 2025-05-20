#include <iostream>

using namespace std;

void reverse()
{
    int n, a, b = 0;
    cin >> n;
    while (n != 0)
    {
        a = n % 10;
        b = b * 10 + a;
        n /= 10;
    }
    cout << b << endl;
}

int main()
{
// Write a Function to reverse a number
//    Input: 123
//    Output: 321
    reverse();
    return 0;
}