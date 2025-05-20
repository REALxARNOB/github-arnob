#include <iostream>

using namespace std;

void palindrome()
{
    int n, a, b = 0, temp;
    cin >> n;
    temp = n;
    while (n != 0)
    {
        a = n % 10;
        b = b * 10 + a;
        n /= 10;
    }
    if (b == temp)
    {
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
}

int main()
{
// Write a Function to check whether a number is palindrome (search on google for palindrome)
//    Input: 121
//    Output: Palindrome
palindrome();
return 0;
}