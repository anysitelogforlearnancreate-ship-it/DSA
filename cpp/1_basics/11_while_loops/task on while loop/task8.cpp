#include <bits/stdc++.h>
using namespace std;
int main()
{

    /*
LEVEL 2 — WHILE LOOP

Take two numbers n and p from the user.

Using a while loop, calculate n raised to the power p.

Example:

Input:
2
5

Output:
32

Because:
2 × 2 × 2 × 2 × 2 = 32

Restriction:
Use a while loop.
Do not use a for loop.
Do not use pow().
*/

    int n, p;

    cin >> n >> p;

    int pow_ = 1;

    int i = 1;
    while (i <= p)
    {

        pow_ = pow_ * n;
        i++;
    }
    cout << pow_ << endl;





    // same program in for loop /simple to understand in for loop so use for loop.
    int number, topower;
    cin>>number>>topower;
    
    int power = 1;
    for (int i = 1; i <= topower; i++)
    {
        power = power * number;
    }

    cout << power;





    return 0;
}