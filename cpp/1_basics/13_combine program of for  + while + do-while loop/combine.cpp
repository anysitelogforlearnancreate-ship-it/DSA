// you will understand the for loop ,whil loop an do-while loop through this program

#include <bits/stdc++.h>
using namespace std;
int main()
{

    // for loop
    for (int f = 0; f <= 5; f++)
    {
        cout << f << " .for - Hi" << endl;
    }
    cout << endl;

    // while loop
    int w = 0;
    while (w <= 5)
    {
        cout << w << " .while - Hi " << endl;

        w++;
    }

    cout << endl;

    // do - while loop
    int d = 0;

    do
    {
        cout << d << " .do-while -- Hi" << endl;

        d++;
    } while (d <= 5);

    // above code has same output

    return 0;
}