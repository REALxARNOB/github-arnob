#include <iostream>

using namespace std;

int main()
{
    // Check if a Number is Prime
    //    Input: 7
    //    Output: Prime
    int n;
    cin >> n;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime" << endl;
            return 0;
        }
    }
    cout << "Prime" << endl;
    return 0;
}