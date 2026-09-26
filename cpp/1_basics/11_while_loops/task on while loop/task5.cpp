#include <bits/stdc++.h>
using namespace std;

int main()
{

    /*
Take a number n from the user.

Using a while loop, count how many even numbers
are present from 1 to n.

Example:
Input: 10

Output:
5

Because:
2, 4, 6, 8, 10
*/

    int n;
    cin >> n;

    int even_count = 0;
    int odd_count = 0;

    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {

            even_count = even_count + 1;
        }
        else
        {
            odd_count = odd_count + 1;
        }

        i++;
    }

    cout << "There are : " << even_count << " even numbers "<<endl;
    cout << "There are : " << odd_count << " odd numbers "<<endl;


    

    return 0;
}