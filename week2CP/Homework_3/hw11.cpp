#include <iostream>

using namespace std;

int main()
{
    /*Print the below pattern using for, while and do while loop
 	*
	**
	***
	****
	***** */
    int n, i, j, temp;
    cin >> n;
    temp = n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }
    i = 1;
    while (n--)
    {
        j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        i++;
        cout << '\n';
    }
    i = 1;
    do
    {
        j = 1;
        // Inner loop for printing stars in each row
        do
        {
            cout << "*";
            j++;
        } while (j <= i);
        cout << '\n';
        i++;
    } while (i <= temp);
    return 0;
}