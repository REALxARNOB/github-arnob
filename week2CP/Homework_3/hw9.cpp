#include <iostream>

using namespace std;

int main()
{
    // Sum of Digits
    //    Input: 472
    //    Output: 4 + 7 + 2 = 13
    int n, sum = 0,d;
    cin >> n;
    while (n != 0)
    {
        d = n % 10;
        sum += d;
        n /= 10;
    }
    cout << sum << endl;
    return 0;
}