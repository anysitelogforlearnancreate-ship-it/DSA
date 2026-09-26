#include <bits/stdc++.h>
using namespace std;
int main()
{

    int i = 1;

    do // first block of code  will be exceuted without checking the condition
    // an then do while loop will start behaving like normal loop.
    {
        cout << i << "rahul" << endl;
        i++;
    } while (i <= 5);

    return 0;
}

//  exactly!** ✅

// A `do-while` loop:

// 1. **First executes the code without checking the condition.**
// 2. Then it **checks the condition**.
// 3. If the condition is `true`, it executes again.
// 4. From then on, it keeps repeating like a normal loop.

// Example:

// ```cpp
// int i = 1;

// do
// {
//     cout << "rahul" << endl;  // executes first
//     i++;
// } while (i <= 5);             // then checks
// ```

// So remember:

// > **`do-while` = Execute first → then check → repeat if true.**

// That's the key difference from `for` and `while`.
