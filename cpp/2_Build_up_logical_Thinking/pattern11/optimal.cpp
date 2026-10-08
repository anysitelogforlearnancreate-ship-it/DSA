/*
907. Pattern 11
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1

0 1

1 0 1

0 1 0 1

1 0 1 0 1

Print the pattern in the function given to you.

flow

        i   j       output
        ↓   ↓
first:  1   0   →    0
second: 1   1   →    1
*/

#include <bits/stdc++.h>
using namespace std;
void pattern11(int n)

{

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {

            cout << 1 - (i + j) % 2 << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;
    pattern11(n);
    return 0;
}