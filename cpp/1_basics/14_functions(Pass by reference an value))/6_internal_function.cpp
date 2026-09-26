#include <bits/stdc++.h>
using namespace std;

// manual max function
int max_(int num1, int num2)
{
    if (num1 >= num2)
    {
        return num1;
    }

    else
    {
        return num2;
    }
}
int main()
{

    int n1, n2;
    cout << "Enter the two numbers "<<endl;
    cin >> n1 >> n2;

    int result_for_manual = max_(n1, n2);
    cout <<"Result for manual function : "<< result_for_manual<<endl;


    int result_for_internal_function = max(n1, n2);
    cout<<"Result for internal function : "<<result_for_internal_function;


    return 0;
}