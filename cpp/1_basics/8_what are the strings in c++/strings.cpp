#include <bits/stdc++.h>              // Includes commonly used C++ libraries
using namespace std;                   // Allows us to use string, cout, etc. directly

int main() {                           // Program execution starts here

    string s = "Striver";              // Creates a string: S t r i v e r
                                        // Index:                  0 1 2 3 4 5 6

    int len = s.size();                // s.size() gives the length of the string
                                        // "Striver" has 7 characters
                                        // len = 7

    s[len - 1] = 'z';                  // len - 1 = 7 - 1 = 6
                                        // s[6] is the last character: 'r'
                                        // Changes 'r' to 'z'
                                        // s becomes "Strivez"

    cout << s[len - 1] << endl;        // s[6] = 'z'
                                        // Prints: z

    cout << s << endl;                 // Prints the complete string
                                        // Prints: Strivez

    cout << s[7 - 1] << endl;          // 7 - 1 = 6
                                        // s[6] = 'z'
                                        // Prints: z

    cout << s[0];                       // s[0] is the first character: 'S'
                                        // Prints: S

    return 0;                           // Ends the program successfully
}