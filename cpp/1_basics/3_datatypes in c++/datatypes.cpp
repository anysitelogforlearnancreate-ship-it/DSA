#include <iostream>
using namespace std;

// data type in c++
// In C++, a data type defines the type of data that a variable can store. It tells the compiler:

// What kind of value the variable will hold.
// How much memory to allocate for it.
// What operations can be performed on it.

int main()
{
    // int
    int x;
    // cout<<"Enter the number :"<<endl;
    cin >> x;
    cout << x << endl;

    // long
    long a = 324;
    cout << a << endl;

    // long long
    long long b = 232323232898989;
    cout << b << endl;

    // float,double
    float c;
    float d = 9;
    double e = 9;
    cin >> c;
    cout << c << endl
         << d << endl;

    // string--picks a string before the space an to print the string after the space you have to define the another string variable.
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << s2 << endl;
    cout << s1 << " " << s2;

    // getline--to print or pickup whole string sentence this function is used.
    string str;
    cout << "Enter the string" << endl;
    cin.ignore(); // Ignore the newline left by cin
    getline(cin, str);
    cout << str;

    // char
    char ch = 'a';
    cout << ch;

    // int,long,long long,float,double,
    // string , getline,
    // char ,---all this sufficient for dsa
    // in case you required any other data type "DO GOOGlE"
    // remember you cant use "long long" to store 10,
    // you should use the data types as per the needed
    // long long takes much more space in your computer.

    return 0;
}