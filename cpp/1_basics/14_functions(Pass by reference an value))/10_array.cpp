
#include <bits/stdc++.h>
using namespace std;
void doSomething(int arr[], int n)
{
    arr[0] = arr[0] + 100;
    cout<<"The value inside the function : "<<arr[0]<<endl;

    for (int i = 0; i < n - 1; i++) 
    {
      cout<< arr[i]<<endl;
    }
}
int main()
{
    int n = 5;
    int arr[n];

    // Take input
    for (int i = 0; i < n - 1; i++) 
    {
        cin >> arr[i];
    }


    doSomething(arr, n);
    cout<<"The value inside the int main function : "<<arr[0]<<endl;

    return 0;
}