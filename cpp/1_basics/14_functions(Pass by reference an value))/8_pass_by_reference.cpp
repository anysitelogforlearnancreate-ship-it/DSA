// Pass by reference means the function receives a reference (another name) to the original variable, so changes made inside the function directly change the original variable.

// Example:
#include <bits/stdc++.h>
using namespace std;

void doSomething(string &s)
{
    s[0] = 'B';
    cout << s << endl;

    s[1] = 'y';
    cout << s << endl;
}
void add_a_number_using_pass_by_reference(int &n)
{
    cout << n << endl;

    n = n + 5;

    cout << n << endl;

    n = n + 5;
}

int main()
{
    // operation 1 on pass by reference
    string st = "Hi raj";
    doSomething(st);
    cout << "The initial string : " << st << endl;

    // operation 1 on pass by reference
    int number = 10;
    add_a_number_using_pass_by_reference(number);
    cout << "The initial string : " << number;

    return 0;
}