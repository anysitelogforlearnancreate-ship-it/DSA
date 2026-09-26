// Parameterized function this function takes some parameters
#include <bits/stdc++.h>
using namespace std;

void printName(string name) // parameters given here .
{
    cout << "Hey " << name << endl;
}
int main()
{
    string _1name;
    cout << "Enter name for first student : ";
    cin >> _1name;
    printName(_1name);

    string _2name;
    cout << "Enter name for second student : ";
    cin >> _2name;
    printName(_2name);

    return 0;
}