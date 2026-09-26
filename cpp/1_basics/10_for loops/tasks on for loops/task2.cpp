/*
    TASK: Number Analyzer

    Write a C++ program that takes 10 numbers from the user
    and analyzes them.

    REQUIREMENTS:

    1. Ask the user to enter 10 numbers.

    2. Calculate the sum of all 10 numbers.

    3. Calculate the average of the numbers.

    4. Find the largest number.

    5. Find the smallest number.

    6. Count how many numbers are even.

    7. Count how many numbers are odd.

    8. At the end, print:
       - Sum
       - Average
       - Largest number
       - Smallest number
       - Number of even numbers
       - Number of odd numbers


    RULES:

    - Use only ONE for loop.
    - Do NOT use an array.
    - Do NOT use functions.
    - You can use if / else.
    - Use cin for input.
    - Use cout for output.


    EXAMPLE INPUT:

    Enter number 1: 12
    Enter number 2: 7
    Enter number 3: 25
    Enter number 4: 10
    Enter number 5: 8
    Enter number 6: 31
    Enter number 7: 4
    Enter number 8: 18
    Enter number 9: 9
    Enter number 10: 20


    EXPECTED OUTPUT:

    Sum: 144
    Average: 14.4
    Largest: 31
    Smallest: 4
    Even numbers: 6
    Odd numbers: 4


    HINT:

    To check whether a number is even:

    if (number % 2 == 0)

    Otherwise, it is odd.
*/

// Write your solution here
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int number;
    double sum = 0;
    double average = 0;
    double highest;
    double lowest;
    int evencount = 0;
    int oddcount = 0;

    for (int i = 0; i < 10; i++)
    {
        // taking 10 numbers
        cin >> number;

        // summig the numbers
        sum = sum + number;

        if (i == 0)
        {
            highest = number;
            lowest = number;
        }
        // finding the largest number
        if (number > highest)
        {
            highest = number;
        }

        // finding the lowest number
        if (number < lowest)
        {
            lowest = number;
        }

        // even / odd counts
        if (number % 2 == 0)
        {
            evencount = evencount + 1;
        }
        if (number % 2 != 0)
        {
            oddcount = oddcount + 1;
        }
    }

    // average of the numbers
    average = sum / 10;

    // printing the results
    double results[7] = {sum, average, highest, lowest, (double)evencount, (double)oddcount};
    string labels[7] = {"sum", "average", "highest", "lowest", "evencount", "oddcount"};

    for (int i = 0; i < 6; i++)
    {
        cout << "The " << labels[i] << ": " << results[i] << endl;
    }

    return 0;
}
