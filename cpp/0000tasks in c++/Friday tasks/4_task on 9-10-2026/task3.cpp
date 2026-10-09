# include <bits/stdc++.h>
using namespace std;


int main(){
    // variable declaration
    string name;
    cout<<"Enter your name : "<<endl;
    cin>>name;

    int rollnumber;
    cout<<"Enter you rollnumber "<<endl;
    cin>>rollnumber;

    int marks[3],pass=0,fail=0,total = 0;
    float average=0 ;
    
    // asking for marks an checking other conditions
    for (int i = 0; i < 3; i++)
    {
        cout<<"Subject "<<i+1<<" marks : "<<endl;
        cin>>marks[i];
        total = total + marks[i];
        
        if (marks[i]<35){
            fail = fail + 1;
        }
        if (marks[i]>=35){
            pass = pass + 1;
        }
        
        
        
    }
    

    // displaying the data
    cout<<"Student name : "<<name<<endl<<"Student Roll : "<<rollnumber<<endl;

    // counting the average 
    average = total / 3.0;
    cout<<average<<endl;
    
    // showing with paris
    pair<int,int> p = {rollnumber,total};
    cout<<"Roll number "<<p.first<<" : "<<"marks "<<p.second;


    // pass an fail
    if (fail>0)
    {
        cout<<name<<" has failed "<<endl;
    }
    else{
        cout<<name<<" has passed";
    }

    return 0;
}