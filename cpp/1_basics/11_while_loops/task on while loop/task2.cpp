
#include <bits/stdc++.h>
using namespace std;
int main()
{

    /*
Take a number n from the user.

Using a while loop, print all even an odd numbers from 1 to n.

Example:
Input: 10

Output:
1 : is odd
2 : is even
3 : is odd
4 : is even
5 : is odd
6 : is even
7 : is odd
8 : is even
9 : is odd
10 : is even
*/

    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {

        if (i % 2 == 0)
        {
            cout << i << " : is even" << endl;
        }
        else if (i % 2 != 0)
        {
            cout << i << " : is odd" << endl;
        }

        i++;
    }

    return 0;
}