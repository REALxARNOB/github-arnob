#include <iostream>

using namespace std;

int main()
{
    // Count the Digits in a Number
//    Input: 12345
//    Output: 5
    int n, count = 0;
    cin >> n;
    if (n == 0)
    {
        count = 1;
    }
    while (n != 0)
    {
        n /= 10;
        count++;
    }

    cout << count << " " << endl;
    return 0;

}