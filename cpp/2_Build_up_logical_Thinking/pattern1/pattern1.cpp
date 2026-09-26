


/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*****
*****
*****
*****
*****

Print the pattern in the function given to you.

Example 1:
Input: n = 4

Output:

****
****
****
****


Example 2:
Input: n = 2

Output:

**
**

*/



#include <bits/stdc++.h>
using namespace std;

void printPattern_1(int number)
{
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cout << "Enter the number to print pattern" << endl;
    cin >> n;
    printPattern_1(n);
    return 0;
}