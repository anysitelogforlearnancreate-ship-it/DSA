#include <bits/stdc++.h>
using namespace std;

void inputMarksAndCalculate(int arr[], int &pass, int &fail, float &total)
{
    // asking for marks an checking other conditions
    for (int i = 0; i < 3; i++)
    {
        cout << "Subject " << i + 1 << " marks : " << endl;
        cin >> arr[i];
        total = total + arr[i];

        if (arr[i] < 35)
        {
            fail = fail + 1;
        }
        if (arr[i] >= 35)
        {
            pass = pass + 1;
        }
    }
}

float calculateAverage(float total)
{
    // counting the average
    float average = total / 3.0;
    return average;
}

void displayResult(string name, int roll, float total, int fail, int pass)
{
    cout << "Student name is "<< name << endl
         << "Student Roll number is " << roll << endl;

    pair<int, float> p = {roll, total};
    cout << "Roll number " << p.first << " : " << "marks " << p.second << endl;

    // pass an fail
    if (fail > 0)
    {
        cout << name << " has failed " << endl;
    }
    else
    {
        cout << name << " has passed";
    }
}

int main()
{
    // variable declaration
    string name;
    cout << "Enter your name : " << endl;
    cin >> name;

    int rollnumber;
    cout << "Enter you rollnumber " << endl;
    cin >> rollnumber;

    int marks[3];
    int pass = 0, fail = 0;
    float total = 0, average = 0;
    inputMarksAndCalculate(marks, pass, fail, total);
    average = calculateAverage(total);
    cout << "The average is " << average<<endl;
    displayResult(name, rollnumber, total, fail, pass);

    return 0;
}