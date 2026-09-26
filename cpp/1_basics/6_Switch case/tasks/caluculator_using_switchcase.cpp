# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void calculate(int a, int b, char operation) {
        // Write your switch-case here
          switch (operation)
    {
    case '+':
        cout<<"These is the addition"<<endl<<a + b;
        break;
    case '-':
        cout<<"These is the substration"<< endl<<a - b;
        break;
    case '*':
        cout<<"These is the multiplication"<<endl<<a * b;
        break;
    case '/':
        cout<<"These is the division"<<endl<<a / b;
        break;
    
    default:
    cout<<"Please enter from (+,-,*/)";
        break;
    }

    }
};

int main(){
    Solution obj; // object creation in c++
    obj.calculate(5,5,'-');

    return 0;
}