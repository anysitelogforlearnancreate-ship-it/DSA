#include <bits/stdc++.h>
using namespace std;
void studentMarksAnalayzer()
{
    double marks[5];

    double highest = marks[0];
    double lowest = marks[0];
    int passed = 0;
    int failed = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
        if (marks[0] and marks[i] >= 40)
        {
            passed = passed + 1;
        }
        if (marks[0] and marks[i] < 40)
        {
            failed = failed + 1;
        }
    }

    cout << highest << endl;
    cout << lowest << endl;
    cout << "passed : " << passed << endl;
    cout << "Failed : " << failed << endl;
}
int main()
{
    studentMarksAnalayzer();
    return 0;
}