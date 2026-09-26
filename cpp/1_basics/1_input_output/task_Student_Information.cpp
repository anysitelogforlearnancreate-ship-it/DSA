/*
Topic: Basics
Task: Student Information

Problem:
Write a C++ program that asks the user to enter:
1. Student Name
2. Age
3. Roll Number
4. Phone Number
5. Percentage
6. CGPA

After taking all the inputs, print all the details.
*/

#include <bits/stdc++.h>
using namespace std;

void add()
{

    string Student_Name;
    cout << "Enter the student name:" << endl;
    cin >> Student_Name;

    int age;
    cout << "Enter your age" << endl;
    cin >> age;

    int rollnumber;
    cout << "Enter your roll number" << endl;
    cin >> rollnumber;

    long long phone;
    cout << "Enter your phone number" << endl;
    cin >> phone;

    float percentage;
    cout << "Enter your perentage" << endl;
    cin >> percentage;

    double CGPA;
    cout << "Enter your CGPA" << endl;
    cin >> CGPA;

    cout<<"hi "<<Student_Name<<" your age is "<<age
    <<" an roll number is "<<rollnumber<<" an your phone number is "<<phone<<" your percentage is "<<percentage
    <<" an your CGPA is "<<CGPA;

    string result = " Hi " + Student_Name + " your age is " + to_string(age) +" your roll number is " + to_string(rollnumber) + " your percantage is " + to_string(percentage) + " an your cgpa is " + to_string(CGPA);
    cout<<result;
}
int main()
{

    add();
    return 0;

} 
