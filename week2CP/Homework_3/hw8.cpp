#include <iostream>

using namespace std;

int main()
{
    //  Find Factorial of a Number
    //    Input: 5
    //    Output: 120
    int n,fac = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    cout << fac << endl;
    return 0;
}