#include <iostream>

using namespace std;

void hello()
{
    int n;
    cin >> n;
    while(n--)
    {
        cout << "Hello" << endl;
    }
}

int main()
{
//     Write a Function to print Hello N times
//    Input: 3
//    Output: Hello (3 times)
    hello();
    return 0;
}