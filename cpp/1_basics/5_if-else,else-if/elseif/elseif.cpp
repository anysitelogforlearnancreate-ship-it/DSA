#include <bits/stdc++.h>
using namespace std;
/*
A school has following rules for grading system
a Below 25 = f,
b 25 to 44 = E,
c 45 to 49 = D,
d 50 to 59 = C,
e 60 to 70 = B,
f 80 to 100 = A
Ask user to enter the marks an print the corressponding grades.
*/
int main()
{
    float marks;
    
    cin >> marks;
    // This is called else if ladder
    if (marks < 25)
    {
        cout << "F";
        /* code */
    }

    else if (marks >= 25 and marks <= 44)
    {
        cout << "E";
        /* code */
    }
    else if (marks >= 45 and marks <= 49)
    {
        cout << "D";
        /* code */
    }
    else if (marks >=50 and marks <=59)
    {
        cout << "C";
        /* code */
    }
    else if (marks >= 60 and marks <= 70)
    {
        cout << "B";
        /* code */
    }
    else if(marks >= 80 and marks<=100)
    {
        cout << "A";
        /* code */
    }

    return 0;
}
