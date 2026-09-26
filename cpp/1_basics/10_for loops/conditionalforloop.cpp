#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Even / Odd
    for (int i = 1; i <=10; i++)
    {
        if (i % 2 == 0)
        {
            cout << "The " << i << " is even";
        }
        else
        {
            cout << "The " << i << " is odd";
        }
        cout << endl;
    }

    // table printing
    int n;
    cout << "Enter the number \n for table you want to print : ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}