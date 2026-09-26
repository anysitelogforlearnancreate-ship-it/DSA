
#include <iostream>
using namespace std;

int main()
{
    /*
    INTERVIEW QUESTION — WHILE LOOP

    Write a C++ program using only a while loop that:

    Take a number n from the user and print the numbers
    from n down to 1.

    Example:

    Input:
    5

    Output:
    5
    4
    3
    2
    1

    Restriction:
    Use a while loop.
    Do not use a for loop.
    */

    int n;
    cin>>n;
    

    while (n>=1)
    {
        cout<<n<<endl;

        n--;
    }
    

    return 0;
}


