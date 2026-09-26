// ### Problem Statement

// Given an integer `n`, print a pattern of `*` in **decreasing order**, where the first row contains `n` stars and each next row contains one less star than the previous row.

// For example, if:

// ```text
// n = 5
// ```

// The output should be:

// ```text
// *****
// ****
// ***
// **
// *
// ```

// **Function:** `practice1(int n)`
// **Input:** An integer `n`
// **Output:** A decreasing star pattern with `n` rows.

#include <bits/stdc++.h>
using namespace std;

void practice1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    practice1(n);

    return 0;
}