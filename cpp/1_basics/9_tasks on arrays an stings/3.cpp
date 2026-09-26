
// /*
// Problem: Student Marks Management
// Difficulty: Easy

// Problem Statement:
// You are given 3 students, and each student has marks in 3 subjects.

// Your task is to:
// 1. Store student names in a 1D string array.
// 2. Store marks in a 2D integer array.
// 3. Take input for all 3 students and their marks.
// 4. Print each student's name along with their 3 subject marks.

// Example Input:
// Rahul
// 70 80 90
// Amit
// 60 75 85
// Priya
// 90 95 88

// Example Output:
// Rahul: 70 80 90
// Amit: 60 75 85
// Priya: 90 95 88

// Constraints:
// - Number of students = 3
// - Number of subjects = 3
// - Marks are between 0 and 100
// - Use only for loops for repetition
// - Do not calculate total or average

// */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void studentMarks()
    {

        // Store student names
        string names[3];

        // Store marks
        int marks[3][4];

        // Take input
        // Write your code here
        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << ".student name : ";
            cin >> names[i];

            cout << "student marks : ";
            for (int j = 0; j < 4; j++)
            {

                cin >> marks[i][j];
            }
        }

        // cout<<names[0]<<marks[0][2];
        // Print output
        // Write your code here
        for (int i = 0; i < 3; i++)
        {
            cout << names[i] << " : ";

            for (int j = 0; j < 4; j++)
            {
                cout << marks[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{

    Solution obj;

    obj.studentMarks();

    return 0;
}