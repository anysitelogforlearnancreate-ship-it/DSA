/*
1008. Pattern 9
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

    * 
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
Print the pattern in the function given to you.
*/

# include <bits/stdc++.h>
using namespace std;
void pattern9(int n){
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
     for (int i = n-1; i >=0; i--)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;

    }

}
int main(){
   int n;
   cout<<"Enter the number :"<<endl;
   cin>>n;
   pattern9(n);
    return 0 ;
}