// ### 🟡 Task 1 — 2D Array

// **Problem:**
// Create a **2 × 3** 2D array. Take 6 numbers from the user and print them in the same **row and column format**.

// **Example input:**

// ```text
// 1 2 3
// 4 5 6
// ```

// **Expected output:**

// ```text
// 1 2 3
// 4 5 6
// ```

// **Hint:** Use **nested `for` loops**:

// * Outer loop → rows
// * Inner loop → columns

// Try solving both yourself first.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[2][3];

    // taking the input
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            /* code */
            cin >> arr[i][j];
        }
    }

    // printing the output
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            /* code */
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}
