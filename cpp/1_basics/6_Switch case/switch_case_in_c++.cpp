#include <bits/stdc++.h>
using namespace std;
int main()
{

    int day;
    cout<<"Enter the day : "<<endl;
    cin >> day;
    switch (day) // Remember we use if-else more instead of switch case
    {
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thrusday";
        break;

    case 5:
        cout << "Friday";
        break;

    case 6:
        cout << "Saturday";
        break;

    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Invaid Case Enterd";
        break;
    }
    return 0;
}