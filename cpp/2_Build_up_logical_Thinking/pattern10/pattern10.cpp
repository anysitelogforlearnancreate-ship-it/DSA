/*
898. Pattern 10
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*

**

***

****

*****

****

***

**

*

Print the pattern in the function given to you.
*/

/*

| Row | `i` | `i + 1` | Number of `*` |
| --- | --: | ------: | ------------: |
| 1st |   0 |       1 |           `*` |
| 2nd |   1 |       2 |          `**` |
| 3rd |   2 |       3 |         `***` |
| 4th |   3 |       4 |        `****` |
| 5th |   4 |       5 |       `*****` |

*/


# include <bits/stdc++.h>
using namespace std;
void pattern9(int n){
    for (int  i = 0; i < n; i++)
    {
       
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
     for (int i = n-2; i >=0; i--)
    {
        for (int j = 0; j <i + 1; j++)
        {
            cout << "*";
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