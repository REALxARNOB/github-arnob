#include <iostream>

using namespace std;

int main()
{
    // Fibonacci Sequence up to N terms
    // Input: 6
    // Output: 0 1 1 2 3 5
    int n, fibo = 0, fibo2 = 1, temp;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << fibo << " ";
        temp = fibo + fibo2;
        fibo = fibo2;
        fibo2 = temp;
    }
    return 0;
}