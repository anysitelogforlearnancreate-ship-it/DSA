
// ===============================================================
// ⭐ Challenge Task : Bank Account Information System
// ===============================================================
//
// Objective:
// Write a C++ program that takes bank account details from the user
// and displays them in a neat, professional format.
//
// ---------------------------------------------------------------
// Input
// ---------------------------------------------------------------
// 1. Account Holder Name (string)
// 2. Account Number      (long long)
// 3. Account Balance     (double)
// 4. Account Type        (char)
//    S = Savings
//    C = Current
//
// ---------------------------------------------------------------
// Sample Input
// ---------------------------------------------------------------
// Rahul Gosavi
// 123456789012
// 25678.50
// S
//
// ---------------------------------------------------------------
// Expected Output
// ---------------------------------------------------------------
// =========== BANK ACCOUNT ===========
//
// Account Holder : Rahul Gosavi
// Account Number : 123456789012
// Balance        : 25678.50
// Account Type   : S
//
// ===================================
//
// ---------------------------------------------------------------
// Concepts Practiced
// ---------------------------------------------------------------
// ✔ cin (Input)
// ✔ cout (Output)
// ✔ string
// ✔ long long
// ✔ double
// ✔ char
// ✔ Formatting Output
//
// ===============================================================

# include <bits/stdc++.h>
using namespace std;
int main(){

    string Account_Holder_Name;
    long long acc_number;
    double acc_balance;
    char acc_type;

    // getting the user details
    getline(cin,Account_Holder_Name);
    cin>>acc_number>>acc_balance>>acc_type;

    // printing the user details
    cout<<"====Bank Account===="<<endl;
    cout<<"Account Holder name : "<<Account_Holder_Name<<endl;
    cout<<"Account Number : "<<acc_number<<endl;
    cout<<"Account Balance : "<<acc_balance<<endl;
    cout<<"Account type : "<<acc_type<<endl;
    cout<<"====================";

    

    return 0;
    
} // namespace std;
