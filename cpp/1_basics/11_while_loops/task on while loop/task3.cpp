#include <bits/stdc++.h>
using namespace std;
int main()
{

    /*
Take a number n from the user.

Using a while loop, print numbers from n down to 1.

Example:
Input: 7

Output:
7
6
5
4
3
2
1
*/

    int n;
    cin >> n;

    int i = 1;
    while (n >= i)
    {
        cout << n << endl;

        n--;
    }

    return 0;
}