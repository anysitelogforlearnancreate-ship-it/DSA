// pass by value an pass by reference
#include <bits/stdc++.h>
using namespace std;

// pass by value
void doSomething(int num)
{
    cout << num << endl;
    num = num + 5;

    cout << num << endl;
    num = num + 5;
}

// pass by value
void doSomething(string s)
{
    s[0] = 'B';
    cout << s << endl;

    s[1] = 'y';
    cout << s << endl;
}

// pass by reference -- see the differncese
void pass_by_reference_doSomething(string &s)
{
    s[0] = 'B';
    cout << s << endl;

    s[1] = 'y';
    cout << s << endl;
}

int main()
{
    // operation 1st on pass by value
    int num = 10;
    doSomething(num);
    cout << "pass by value ...The initial value : " << num << endl;

    // operation 2nd on pass by value
    string st = "Hi raj";
    doSomething(st);
    cout << "pass by value ...The initial string : " << st<<endl;

    // operation 3rd on pass by reference
    string st_ = "Hi raj";
    pass_by_reference_doSomething(st_);
    cout << "pass by refernce ...The initial string : " << st_;

    return 0;
}