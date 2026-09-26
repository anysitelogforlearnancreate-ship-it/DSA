// 5!=5×4×3×2×1  get a factorial of the 5 using for an while loop

#include <iostream>
using namespace std;

int main()
{
    // while loop
    int n = 5;

    int factorial = 1;

    while (n > 0)
    {
        factorial *= n; // Keep finding factorial with n and decrement n
        n--;
    }

    cout << "Factorial of using while loop " << factorial << endl; // Print the factorial


    //  for loop
    int number = 5;
    int factorial_ = 1;
    for (int i = number; i > 0; i--)
    {
        factorial_ = factorial_ * i;
    }

    cout << "factorial " << number << " using for loop " << factorial;

    return 0;
}