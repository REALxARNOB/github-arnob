#include <iostream>

using namespace std;

int main()
{
    // Print Multiplication Table of a Number
    //    Input: 5
    //    Output: 
    // 5 x 1 = 5
    // 5 x 2 = 20 
    int n;
    cin >>n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}