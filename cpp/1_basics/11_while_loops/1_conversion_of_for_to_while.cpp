#include <bits/stdc++.h>
using namespace std;
int main(){

    // for loop
    for (int i = 0; i <=5; i++)
    {
        cout<<i<<" .for Rahul"<<endl;
    }//same for-loop in while loop



    // while loop
    int i = 0;
    while (i<=5)
    {
        cout<<i<<" .While Rahul"<<endl;

        i++;
    }
    
    

    return 0;
}




// same flow for (for an while loop)

// Both do:

// ```text
// Initialize i
//      ↓
// Check condition
//      ↓
// If TRUE → execute code
//      ↓
// i++
//      ↓
// Check condition again
//      ↓
// Repeat
//      ↓
// If FALSE → STOP
// ```

// The only difference is **where you write each part**:

// * `for` → initialization, condition, increment are in the `for` statement.
// * `while` → they are written separately.

// #####
// for:

// initialize → condition → body → increment → condition → ...

// while:

// initialize → condition → body → increment → condition → ...
