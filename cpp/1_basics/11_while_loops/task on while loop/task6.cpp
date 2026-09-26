#include <bits/stdc++.h>
using namespace std;
int main()
{

    /*
LEVEL 2 — WHILE LOOP

Take a number n from the user.

Using a while loop, find the sum of all even numbers
from 1 to n.

Example:

Input:
10

Output:
30

Because:
2 + 4 + 6 + 8 + 10 = 30

Restriction:
Use a while loop.
Do not use a for loop.
*/

    int n;
    cin >> n;

    double sum = 0;

    int i = 1;
    while (i <= n)
    {

        if (i % 2 == 0)
        {
            sum = sum + i;
        }

        i++;
    }

    cout << sum;
    return 0;
}