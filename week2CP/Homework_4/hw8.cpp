#include <iostream>

using namespace std;

void power()
{
    int n, b, temp;
    cin >> n >> b;
    temp = n;
    for (int i = 1; i < b; i++)
    {
        n *= temp;
    }
    cout << n << endl;
}

int main()
{
//     Write a Function to calculate power (a^b)
//    Input: 2 3
//    Output: 8
    power();
    return 0;
}