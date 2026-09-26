/*
Create an array of strings:

string words[3] = {"Apple", "Banana", "Mango"};

Write a program that:

Prints the first word.
Prints the second character of the first word.
Prints the last character of the third word.
Expected Output
Apple
p
o
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string words[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> words[i];
    }
    // printingt the first word
    cout << words[0];

    // printing the second character of the 1st word
    cout <<"Printing the second character of the 1st word : "<< words[0][1]<<endl;
    /* words [0] [1]
              ↑   ↑
              │   └── character index
              └────── string index
       */
    // printing the 3rd character of the 1st word
    cout <<"Printing the second character of the 1st word : "<< words[0][2];

    return 0;
}