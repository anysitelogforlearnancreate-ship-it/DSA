// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *    print this pattern 



# include <bits/stdc++.h>
using namespace std;
void practice2part1(int n1){

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<"*";
            
        }
        cout<<endl;
        
    }
    
}
void practice2part2(){

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            cout<<"*";
            
        }
        cout<<endl;
        
    }
    
    
   
    
}
int main(){
    int n_1;
    cout<<"Enter the number: "<<endl;
    cin>>n_1;
    practice2part1(n_1);

   
    practice2part2();
    
}