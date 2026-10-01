
// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// *****

// ****

// ***

// **

// *

// Print the pattern in the function given to you.


# include <bits/stdc++.h>
using namespace std;

void pattern5(int n){
    for (int i = n; i > 0; i--)
    {
       for (int j = i; j >0; j--)
       {
        cout<<"*";
       }
       cout<<endl;
       
    }
    
}
int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    cout<<endl;
     
    pattern5(n);


    return 0 ;
}