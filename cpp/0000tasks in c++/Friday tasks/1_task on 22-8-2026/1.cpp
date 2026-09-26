#include <bits/stdc++.h>
using namespace std;

int main()
{
    double marks_of_5_student[5];

    // 1. taking marks of 5 student
    for (int i = 0; i < 5; i++)
    {

        cin >> marks_of_5_student[i];
    }

    // 2. Printing the marks
    for (int i = 0; i < 5; i++)
    {

        cout << marks_of_5_student[i] << " ";
    }

    // 3. find the highest marks

    double highest = marks_of_5_student[0];

    for (int i = 0; i < 5; i++)
    {
        if (marks_of_5_student[i] > highest)
        {
            highest = marks_of_5_student[i];
        }
        /* code */
    }

    cout << endl;
    cout << "Highest marks = " << highest << endl;

    // 4. find lowest marks
    double lowest = marks_of_5_student[0];
    for (int i = 0; i < 5; i++)
    {
        if (marks_of_5_student[i] < lowest)
        {

            lowest = marks_of_5_student[i];
        }
    }

    cout << "Lowest marks = " << lowest << endl;

    // 5. Calculate the average marks
    double total = 0;

    for (int i = 0; i < 5; i++)
    {
        total = total + marks_of_5_student[i];
    }

    double average = total / 5;

    cout<<"Average : "<<average;

    // 6.Counting how many students passed
    int passed = 0;
    for (int i = 0; i < 5; i++)
    {
        if (marks_of_5_student[i] >= 40)
        {
            passed = passed + 1;
        } /* code */
    }
    cout << endl;
    cout << "Passed = " << passed;

    // 7 Counting how many students failed
    int failed = 0;
    for (int i = 0; i < 5; i++)
    {
        if (marks_of_5_student[i] < 40)
        {
            failed = failed + 1;
        } /* code */
    }
    cout << endl;
    cout << "failed = " << failed;

    return 0;
}