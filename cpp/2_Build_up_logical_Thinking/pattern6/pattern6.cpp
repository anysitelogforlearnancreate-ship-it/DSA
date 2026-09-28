/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

12345

1234

123

12

1

Print the pattern in the function given to you.
*/
#include <bits/stdc++.h>
using namespace std;
void pattern6(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    pattern6(n);

    return 0;
}