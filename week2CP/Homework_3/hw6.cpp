#include <iostream>

using namespace std;

int main()
{
    // Reverse a Number using Loop
//    Input: 1234
//    Output: 4321
    int n, a, b = 0;
    cin >> n;
    while (n != 0)
    {
        a = n % 10;
        b = b * 10 + a;
        n /= 10;
    }
    cout << b << endl;
    return 0;
}