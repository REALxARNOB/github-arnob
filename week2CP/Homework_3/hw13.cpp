#include <iostream>

using namespace std;

int main()
{
    int n, i = 1, j;
    cin >> n;
    do
    {
        j = 0;
        do
        {
            cout << "*";
            j++;
        } while (j < i);
        cout << '\n';
        i++;
    } while (i <= n);
    return 0;
}