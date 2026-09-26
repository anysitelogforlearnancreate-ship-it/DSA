// I know the code is much lengthy but for understanding you can try it
/*
for DSA
1D Array       → MUST KNOW ⭐⭐⭐⭐⭐
2D Array       → MUST KNOW ⭐⭐⭐⭐
3D Array       → Basic understanding ⭐⭐
4D+ Array      → No need initially ⭐
*/
#include <bits/stdc++.h>
using namespace std;

void _2darr()
{

    int arr[2][4];
// taking the input
    for (int i = 0; i < 2; i++) // for loop for row
    {
        for (int j = 0; j < 4; j++)
        {

            cin >> arr[i][j];
        }

        /* code */
    }
// printing the output
    for (int i = 0; i < 2; i++) // for loop for row
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
        /* code */
    }
}

void _3darr()
{

    int arr[2][3][4];
// taking the input
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++)
        {

            for (int k = 0; k < 4; k++)
            {

                cin >> arr[i][j][k];
            }

            /* code */
        }
    }
// printing the output
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            for (int k = 0; k < 4; k++)
            {

                cout << arr[i][j][k] << " ";
            }

            cout << endl;
        }
    }
}

int main()

{
    _2darr();
    _3darr();

    return 0;
}
