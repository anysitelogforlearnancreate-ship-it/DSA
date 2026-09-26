

// ### 🟢 Task 1 — 1D Array

// **Problem:**
// Create an array of **5 integers**. Take 5 numbers from the user and print all the elements.

// **Example input:**

// ```text
// 10 20 30 40 50
// ```

// **Expected output:**

// ```text
// 10 20 30 40 50
// ```

// **Hint:** Use one `for` loop.

// ---

# include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    // taking the input
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    
    // printing the output
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}

