#include <iostream>

using namespace std;

void max()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }
}

int main()
{
//     Write a function to find the maximum of two numbers
//    Input: a = 10, b = 20
//    Output: 20
    max();
    return 0;
}
