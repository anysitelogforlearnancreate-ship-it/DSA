
// arrays are mutable
# include <bits/stdc++.h>
using namespace std;

int main(){
    // int a,b,c,d,e;
    // cin>>a>>b>>c>>d>>e;
    // instead of this we can use array

    int arr[5]; 
    // An array stores elements of the same data type,not the mixed data type.
    // Like if the arr type is int ,you can't store string in the array .
    // cout<<"Enter 5 numbers :"<<endl;
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

    cout<<"The number at index 3 is "<<arr[3];

    return 0;
}