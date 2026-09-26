#include <bits/stdc++.h>
using namespace std;

/*
    🏦 REAL-WORLD TASK: SIMPLE BANK BALANCE

    Problem Statement:

    Create a simple bank account program using C++ functions.

    1. Start with an initial balance of 5000.

    2. Create a function checkBalance()
       - It should display the current balance.
       - Use PASS BY VALUE.

    3. Create a function depositMoney()
       - Ask the user how much money they want to deposit.
       - Add that amount to the balance.
       - Use PASS BY REFERENCE so the original balance changes.

    4. Create a function withdrawMoney()
       - Ask the user how much money they want to withdraw.
       - Subtract that amount from the balance.
       - Use PASS BY REFERENCE so the original balance changes.

    5. In main(), call the functions in this order:

          checkBalance()
               ↓
          depositMoney()
               ↓
          checkBalance()
               ↓
          withdrawMoney()
               ↓
          checkBalance()

    Example:

    Initial balance: 5000

    Enter deposit amount: 2000
    Balance: 7000

    Enter withdrawal amount: 1500
    Balance: 5500


    🎯 Main Goal:
       Practice the difference between:

       PASS BY VALUE
       → Function receives a copy.
       → Original variable does NOT change.

       PASS BY REFERENCE
       → Function works with the original variable.
       → Original variable DOES change.

    ⚠️ Don't add menus, arrays, classes, or advanced validation.
       Focus only on functions and pass by value/reference.
*/

void checkbalance(int bal)
{
    cout << "your balance is " << bal << endl;
}
void depositeMoney(int amount, int &bal)
{
    bal = bal + amount;
}
void withdrawMoney(int amount, int &bal)
{
    bal = bal - amount;
}

int main()
{
    int balance = 50000;
    checkbalance(balance);

    int amount;
    cout << "Enter the amount you want to deposite : " << endl;
    cin >> amount;

    depositeMoney(amount, balance);
    checkbalance(balance);

    int withdrawamount;
    cout << "Enter the amount you want to withdraw : " << endl;
    cin >> withdrawamount;
    
    withdrawMoney(withdrawamount, balance);
    checkbalance(balance);
}