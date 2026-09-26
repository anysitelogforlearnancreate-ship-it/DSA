/*
### Problem Statement

Write a C++ program that works with a **1D array, 2D array, and string**.

Your program should:

1. Create a 1D array containing 5 marks and print the **third element**.
2. Create a 2D array with **2 rows and 3 columns** and print the element at **row 2, column 3**.
3. Create a string `"Striver"` and print its **first and last characters**.

### Expected Output

```text
60
60
S
r
```

**Difficulty:** Easy 🟢

*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void problem(int _1Darr[5], int _2Darr[2][3], string s)
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> _1Darr[i];
        }
        cout << "1d arry  ended an 2 darray started" << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> _2Darr[i][j];
            }
        }
    }
};
int main()
{

    Solution obj;

    int array1[5];
    int array2[2][3];
    string s1 = "Striver";
    obj.problem(array1, array2, s1);
    cout << "This is the third element in the 1Darry  :" << array1[2] << endl;
    cout << "This is the third element in the 2Darry in row 2  :" << array2[1][2] << endl;
    cout << s1[0] << endl
         << s1[6];
    cout << s1[s1.length() - 1];
    // in python print(s1[-1])

    return 0;
}