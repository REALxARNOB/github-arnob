#include <iostream>

using namespace std;

int main()
{
    // 1.2.10 Write a program to input the month number and print the number of days in that month.
    int month;

    cin >> month;

    switch(month)
    {
        case 1:
            cout << "Days = 31" << '\n';
            break;

        case 2:
            cout << "Days = 28" << '\n';
            break;

        case 3:
            cout << "Days = 31" << '\n';
            break;

        case 4:
            cout << "Days = 30" << '\n';
            break;

        case 5:
            cout << "Days = 31" << '\n';
            break;

        case 6:
            cout << "Days = 30" << '\n';
            break;

        case 7:
            cout << "Days = 31" << '\n';
            break;

        case 8:
            cout << "Days = 31" << '\n';
            break;

        case 9:
            cout << "Days = 30" << '\n';
            break;

        case 10:
            cout << "Days = 31" << '\n';
            break;

        case 11:
            cout << "Days = 30" << '\n';
            break;

        case 12:
            cout << "Days = 31" << '\n';
            break;

        default:
            cout << "Wrong month" << '\n';
    }

    return 0;
}