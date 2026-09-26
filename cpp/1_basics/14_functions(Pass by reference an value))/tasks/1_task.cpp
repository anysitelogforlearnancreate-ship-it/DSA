#include <bits/stdc++.h>
using namespace std;
/*
 problem statement :

### 🏦 Bank Account — Pass by Value & Pass by Reference

Create a simple C++ bank account program.

1. Create a `balance` variable.
2. Create `checkBalance()` and pass `balance` **by value**.

   * Display the balance.
   * Understand that changing the function's parameter does **not** change the original balance.
3. Create `depositMoney()` and pass `balance` **by reference**.

   * Ask the user for a deposit amount.
   * Add it to the balance.
   * The original balance should change.
4. Create `withdrawMoney()` and pass `balance` **by reference**.

   * Ask the user for a withdrawal amount.
   * Subtract it from the balance.
   * The original balance should change.
5. Display the final balance.

### Overall flow

```text
Enter initial balance
        ↓
   checkBalance()
   (pass by value)
        ↓
   Deposit money
   (pass by reference)
        ↓
   Withdraw money
   (pass by reference)
        ↓
   Display final balance
```
*/
void checkBlance(int bal)
{
    cout << "Your initial balance in the function is : " << bal << endl;
}
void depositMoney(int &bal)
{
    int amount;
    cout << "Enter the depositing amount : " << endl;
    cin >> amount;
    bal = bal + amount;
}
void withdrawMoney(int &bal)
{
    int amount;
    cout << "Enter the withdraw amount : " << endl;
    cin >> amount;
    bal = bal - amount;
}
int main()
{
    // adding the balance
    int bal;
    cout << "Enter the balance : " << endl;
    cin >> bal;
    checkBlance(bal);
    cout << "Your initial balance is : " << bal << endl;

    // deposting
    depositMoney(bal);
    cout << "Amount after depositing  : " << bal << endl;
    
    // withdrawing
    withdrawMoney(bal);
    cout << " Amount remain after withdrawel : " << bal;

    return 0;
}