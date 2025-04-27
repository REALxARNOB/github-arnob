#include <iostream>

using namespace std;

int main()
{
    // 1.2.8 Write a program to input any character and check whether it is alphabet, digit or special character.
    char character;

    cin >> character;

    switch(character)
    {
        case 'A' ... 'Z':
            cout << "Alphabet" << '\n';
            break;
        
        case 'a' ... 'z':
            cout << "Alphabet" << '\n';
            break;

        case '0' ... '9':
            cout << "Digit" << '\n';
            break;

        default:
            cout << "Speacial character" << '\n';
    }

    return 0;
}