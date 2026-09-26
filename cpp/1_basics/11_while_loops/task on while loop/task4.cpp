#include <bits/stdc++.h>
using namespace std;
int main()
{

    /*
Take a number n from the user.

Using a while loop, find the sum of all numbers
from 1 to n.

Example:
Input: 5

Output:
15

Because:
1 + 2 + 3 + 4 + 5 = 15
*/

    int n;
    cin >> n;

    int sum = 0;
    

    int i = 1;
    while (i <= n)
    {
        sum = sum + i;

        i++;
    }

    cout << sum;

    return 0;
}