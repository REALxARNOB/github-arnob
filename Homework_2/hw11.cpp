#include <iostream>

using namespace std;

int main()
{
    /*
    1.2.11 Write a program to input electricity unit charges and calculate total electricity bill according to the given condition:
    For first 50 units 0.50 taka per unit
    For next 100 units 0.75 taka per unit
    For next 100 units 1.20 taka per unit
    For unit above 250 1.50 taka per unit
    An additional charge of 20% is added to the bill
    */
   int unit;
   float bill;

   cin >> unit;

   switch(unit)
   {
    case 0 ... 50:
        bill = unit * .50;
        cout << "Bill = " << bill + ((bill / 100) * 20) << '\n';
        break;

    case 51 ... 150:
        bill = unit * .75;
        cout << "Bill = " << bill + ((bill / 100) * 20) << '\n';
        break;

    case 151 ... 250:
        bill = unit * 1.20;
        cout << "Bill = " << bill + ((bill / 100) * 20) << '\n';
        break;

    default:
        bill = unit * 1.50;
        cout << "Bill = " <<bill + ((bill / 100) * 20) << '\n';
        break;
   }

   return 0;
}