#include <iostream>

using namespace std;

void even()
{
    int a;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Not even" << endl;
    }
}

int main()
{
// Write a function to check if a number is even
//    Input: 6
//    Output: Even
    even();
    return 0;

}