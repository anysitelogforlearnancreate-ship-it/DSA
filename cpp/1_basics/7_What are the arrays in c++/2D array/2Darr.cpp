#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 2D array
    /*
           col0  col1  col2  col3
    row0    [ ]   [ ]   [ ]   [ ]
    row1    [ ]   [ ]   [ ]   [ ]
    row2    [ ]   [ ]   [ ]   [ ]

    */
    int arr[3][5];

    // arr[1][3] = 78;
    // cout << arr[1][3];

    //   taking the user input
    for (int i = 0; i < 3; i++) // row
    {
        for (int j = 0; j < 5; j++) // column
        {
            cin >> arr[i][j];
        }
    }
    //  printing the 2d array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl; // endl will be give new line after 5 elements will be entered.
    }
    
    return 0;
}
