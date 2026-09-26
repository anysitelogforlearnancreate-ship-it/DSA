// return function --
// take two numbers an return the calculated sum an print it.
#include <bits/stdc++.h>
using namespace std;

int sum(int num1, int num2)
{
    int num3 = num1 + num2; // num1 + num2 = num3  --1st step
    return num3;
}
int main()
{
    int num_1, num_2;
    cin >> num_1 >> num_2;
    int result = sum(num_1, num_2); // num3  --2nd step
    cout << result;                 // 3rd step

    return 0;
}