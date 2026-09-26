# include <bits/stdc++.h>
using namespace std;
int main(){

    /*
LEVEL 2 — WHILE LOOP

Take a number n from the user.

Using a while loop, calculate the multiplication table
of n from 1 to 10.

Example:

Input:
5

Output:
5
10
15
20
25
30
35
40
45
50

Restriction:
Use a while loop.
Do not use a for loop.
*/
    int n ;
    cin>>n;

    int i =1;
    while (i<=10)
    {
        cout<<n*i<<endl;
        i++;
    }
    

    
    return 0;
}