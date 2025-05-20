#include <iostream>

using namespace std;

void sum()
{
    int n, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}

int main()
{
//     Write a Function to find the sum of first N numbers
//    Input: N = 5
//    Output: 15
    sum();
    return 0;
}