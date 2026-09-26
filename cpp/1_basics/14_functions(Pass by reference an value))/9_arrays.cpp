// arrays by default are passed by reference in C++ and not by value. So if we pass an array to a function, the changes made to the array inside the function will be reflected in the original array. This is because arrays are essentially pointers to their first element, and when we pass an array to a function, we are passing the address of the first element of the array.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];

    // Take input
    for (int i = 0; i < 5; i++)
    {
        // cout<<i<<endl;
        cin >> arr[i];
    }

    // Display array
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}