#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Hi user" << endl;
    cout << "Hi user" << endl;
    cout << "Hi user" << endl;
    cout << "Hi user" << endl;
    cout << "Hi user" << endl;
    // instead of printing this mannually ,use for loop

    int i;
    // forward for loop count
    for (i = 1; i <= 5; i++)
    {
        cout << "Hi user" << endl;
    } // same output as above
    cout << "Loop stopped when i became: " << i<<endl;

    // reverse for loop count
    int j;
    for (j = 5; j >=1; j--)
    {
        cout << "hi user" <<j<<endl;
    }
    cout << "Loop stopped when j became :" << j;

    return 0;
}