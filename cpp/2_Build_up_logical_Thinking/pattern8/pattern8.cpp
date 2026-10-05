/*
1006. Pattern 8
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*********
 *******
  *****
   ***
    *
Print the pattern in the function given to you.
*/
#include <bits/stdc++.h>
using namespace std;
void pattern8(int n)
{
    for (int i = 0; i<n; i++)
    {

        // left space
        for (int j = 0; j < i ; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <2*n - (2*i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;

        // stars space
        // right space
    }
}
int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    pattern8(n);
    return 0;
}