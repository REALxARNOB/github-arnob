#include <iostream>

using namespace std;

int main()
{
    // 1.2.6 Write a program to check whether a character is in the alphabet or not.
    char alphabet;

    cin >> alphabet;

    switch (alphabet)
    {
    case 'A' ... 'Z':
        cout << "Alphabet" << '\n';
        break;
    
    case 'a' ... 'z':
        cout << "Alphabet" << '\n';
        break;
        
    default:
        cout << "Not alphabet" << '\n';
        break;
    }

    return 0;
}