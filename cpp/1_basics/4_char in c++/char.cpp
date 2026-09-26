
#include <iostream>
using namespace std;

int main() {

    // ==========================================================
    // CHARACTER (char) DATA TYPE IN C++
    // ==========================================================

    // A char stores only ONE character.
    // It occupies 1 byte (8 bits) of memory.

    char ch = 'A';
    cout << ch << endl;

    // ----------------------------------------------------------
    // Range of char
    // ----------------------------------------------------------

    // Signed char  : -128 to 127
    // Unsigned char: 0 to 255

    unsigned char uch = 255;
    cout << (int)uch << endl;   // Type casting to print its numeric value

    // ==========================================================
    // Taking character input
    // ==========================================================

    char letter;
    cout << "Enter a character: ";
    cin >> letter;

    cout << "You entered: " << letter << endl;

    // ==========================================================
    // Checking the range of a character
    // ==========================================================

    // Check whether the character is an uppercase letter (A-Z)

    if (letter >= 'A' && letter <= 'Z') {
        cout << "Uppercase Letter" << endl;
    }

    // Check whether the character is a lowercase letter (a-z)

    else if (letter >= 'a' && letter <= 'z') {
        cout << "Lowercase Letter" << endl;
    }

    // Check whether the character is a digit (0-9)

    else if (letter >= '0' && letter <= '9') {
        cout << "Digit" << endl;
    }

    else {
        cout << "Special Character" << endl;
    }

    // ==========================================================
    // Why does the above comparison work?
    // ==========================================================

    // Characters are internally stored using ASCII values.

    // 'A' = 65
    // 'B' = 66
    // ...
    // 'Z' = 90

    // 'a' = 97
    // 'b' = 98
    // ...
    // 'z' = 122

    // '0' = 48
    // ...
    // '9' = 57

    // Therefore,
    // if(letter >= 'A' && letter <= 'Z')
    // actually compares the ASCII values.

    // ==========================================================
    // Invalid examples
    // ==========================================================

    // char ch1 = 'AB';      // ❌ Wrong - char stores only one character.
    // char ch2 = "A";       // ❌ Wrong - double quotes create a string literal.

    // ==========================================================
    // Correct way to store multiple characters
    // ==========================================================

    string str = "ABC";
    cout << str << endl;

    // ==========================================================
    // Summary
    // ==========================================================

    // char   -> Stores exactly one character.
    // string -> Stores multiple characters (text).
    // Use single quotes (' ') for char.
    // Use double quotes (" ") for string.

    return 0;
}

