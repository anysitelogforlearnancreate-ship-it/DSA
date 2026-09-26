
// ## Problem Statement

// Given an integer `n`. You need to recreate the pattern given below for any value of `N`. Let's say for `N = 5`, the pattern should look like:

// ```text
// *
// **
// ***
// ****
// *****
// ```

// Print the pattern in the function given to you.

// ### Example 1:

// **Input:** `n = 4`

// **Output:**

// ```text
// *
// **
// ***
// ****



# include <bits/stdc++.h>
using namespace std;
void pattern2(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<= i ; j++)
        {
           cout<<"*";
        }
        cout<<endl;
        
    }
    
}
int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    pattern2(n);
    
}