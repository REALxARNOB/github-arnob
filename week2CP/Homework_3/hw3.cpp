#include <iostream>

using namespace std;

int main()
{
    // Print Even Numbers from 1 to N
    //    Input: N = 10
    //    Output: 2 4 6 8 10
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}