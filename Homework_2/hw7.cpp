#include <iostream>

using namespace std;

int main()
{
    // 1.2.7 Write a program to input any alphabet and check whether it is vowel or consonant.
    char alphabet;

    cin >> alphabet;

    switch(alphabet)
    {
        case 'A':
            cout << "Vowel" << '\n';
            break;

        case 'a':
            cout << "Vowel" << '\n';
            break;

        case 'E':
            cout << "Vowel" << '\n';
            break;

        case 'e':
            cout << "Vowel" << '\n';
            break;

        case 'I':
            cout << "Vowel" << '\n';
            break;

        case 'i':
            cout << "Vowel" << '\n';
            break;

        case 'O':
            cout << "Vowel" << '\n';
            break;

        case 'o':
            cout << "Vowel" << '\n';
            break;

        case 'U':
            cout << "Vowel" << '\n';
            break;

        case 'u':
            cout << "Vowel" << '\n';
            break;

        default:
            cout << "Consonant" << '\n';
    }

    return 0;
}