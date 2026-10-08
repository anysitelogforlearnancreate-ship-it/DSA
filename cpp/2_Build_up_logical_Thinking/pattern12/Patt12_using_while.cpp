#include <bits/stdc++.h>
using namespace std;
void pattern12(int n)
{


    int i = 1;
    while (i<=n)
    {
        int l = 1;
        while (l<=i)
        {
            cout<<l;
            l++;
        }
        int s = 1;
        while (s<=2*n-2*i)
        {
            cout<<" ";
            s++;
        }
        
        int r = i;
        while (r>=1)
        {
            cout<<r;
            r--;
        }

        cout<<endl;
        
        
        i++;
    }
 
}

int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    pattern12(n);
    return 0;
}