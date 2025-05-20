#include <iostream>

using namespace std;

void pattern()
{
    int totalRows, int currentRow = 1, int starsLeft = 0
    cin >> n;
    if (n > row)
    {
        return;
    }
    if (starsLeft == 0)
    {
        std::cout << std::endl;
        pattern(totalRows, currentRow + 1, totalRows - currentRow);
        return;
    }
    std::cout << '*';
    pattern(totalRows, currentRow, starsLeft - 1);
    
}

int main()
{
    // write a function to print the below sequence. (DO NOT USE LOOPS INSIDE THE FUNCTION. SOLVE WITH ONLY FUNCTION)
    // Input: 4
    // Output:
    // ****
    // ***
    // **
    // *
}