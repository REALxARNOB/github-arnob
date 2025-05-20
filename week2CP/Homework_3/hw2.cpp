#include <iostream>

using namespace std;

int main()
{
    // Sum of First N Natural Numbers
    //    Input: N = 10
    //    Output: 55
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}