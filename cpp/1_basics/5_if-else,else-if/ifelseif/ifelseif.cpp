#include <bits/stdc++.h>
using namespace std;
/*
Take the age from the user and then decide accordingly
1.if age < 18,
print-> you are not eligible for the job

2.if age >= 18,
print-> you are eligible for the job

3.if age  >=55 and <=57,
print-> you are  eligible for the job but retirement soon

4.if age >57,
print-> retirement time
*/
int main()
{
    int age;
    cin >> age;

    if (age < 18)
    {
        cout << "you are not eligible for the job";
        /* code */
    }
    else if (age <= 54)
    {
        cout << "you are eligible for the job";
    }
    else if (age <= 57)
    {
        cout << "you are eligible for the job but retirement soon";
    }
    else
    {
        cout << "retirement time";
    }

    return 0;
}