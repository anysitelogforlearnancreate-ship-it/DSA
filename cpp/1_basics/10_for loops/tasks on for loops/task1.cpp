/*
    TASK: Student Marks Analyzer

    Write a C++ program to analyze the marks of 10 students.

    Requirements:

    1. Ask the user to enter marks for 10 students.

    2. For each student, print:
       Student number
       Marks
       Pass or Fail

    3. Calculate the total marks of all 10 students.

    4. Calculate the average marks.

    5. Find the highest marks.

    6. Find the lowest marks.

    7. Count how many students passed.
       Passing marks = 40

    8. Count how many students failed.

    9. At the end, display:
       - Total marks
       - Average marks
       - Highest marks
       - Lowest marks
       - Number of passed students
       - Number of failed students


    RULES:

    - Use only ONE for loop.
    - You can use if / else.
    - You can use variables.
    - Do NOT use arrays.
    - Do NOT use functions.
    - Use cin for input.
    - Use cout for output.


    STARTING STRUCTURE:

    for (int i = 1; i <= 10; i++)
    {
        // Write your logic here
    }


    Example:

    Enter marks for student 1: 65
    Enter marks for student 2: 32
    Enter marks for student 3: 78
    ...

    Expected final output:

    Total marks: 551
    Average marks: 55.1
    Highest marks: 90
    Lowest marks: 27
    Passed students: 7
    Failed students: 3
*/

// Write your solution here

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //     arr = [].....is in python

    // for i in range(10):
    //     marks = float(input("Enter marks: "))
    //     arr.append(marks)

    double marks;
    double total = 0;
    double average = 0;
    double highest;
    double lowest;
    int passcount = 0;
    int failcount = 0;

    for (int i = 0; i < 10; i++)
    {
        // users marks
        cin >> marks;

        // total marks
        total = total + marks;

        // average  marks of total 10 students
        average = total / 10;

        // highest marks
        if (i == 0)
        {
            highest = marks;
            lowest = marks;
        }
        // condition for highest
        if (marks > highest)
        {
            highest = marks;
        }
        // condition for lowest
        if (marks < lowest)
        {
            lowest = marks;
        }

        // count of  passed students
        if (marks > 40)
        {
            passcount = passcount + 1;
        }
        
        // count of failed students
        if (i < 40)
        {
            failcount = failcount + 1;
        }
    }

    cout << " Total : " << total << endl;
    cout << " Average : " << average << endl;
    cout << " highest : " << highest << endl;
    cout << " lowest : " << lowest << endl;
    cout << " passcount : " << passcount << endl;
    cout << " failcount : " << failcount << endl;

    return 0;
}
