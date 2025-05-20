#include <iostream>

using namespace std;

void armstrong()
{
    int n, count = 0, rem, res = 0, temp, pow, i;
    cin >> n;
    temp = n;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        pow = 1;
        i = count;
        while (i != 0)
        {
            pow *= rem;
            i--;
        }
        res += pow;
        temp /= 10;
    }

    if (n == res)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
//     Write a Function to check whether a number is Armstrong
//    Input: 153
//    Output: Yes
    armstrong();
    return 0;
}