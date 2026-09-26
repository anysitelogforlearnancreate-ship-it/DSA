/*
🧩 Task: Change a Character in a String

Write a C++ program that:

Creates the string:

string s = "Computer";
Prints the first character.
Prints the last character.
Changes the last character to 'X'.
Prints the modified string.
Expected output
C
r
ComputeX
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "computer";
    cout << s[0] << endl;
    cout << s[7] << endl;
    int changeChlen = s.size();
    s[changeChlen - 1] = 'X';
    cout << s << endl;
}