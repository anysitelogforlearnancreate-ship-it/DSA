/*
### 🟢 Array Task 2 — Find the Largest Element

Write a C++ program that:

1. Creates an integer array of **5 elements**.
2. Takes **5 numbers from the user**.
3. Finds the **largest number** in the array.
4. Prints the largest number.

### Example

**Input:**

```text
10 25 7 42 18
```

**Output:**

```text
Largest element: 42
```

### Hint

You can start with:

```cpp
int largest = arr[0];
```

Then use a `for` loop to compare the remaining elements.

**Don't use `sort()`** for this task. Try to find the largest element using a loop.

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]; // giving the size of array

    // taking the numbers into array
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int largest = arr[0]; // first enterd number is the largest.

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i]; // stores largest element
        }
    }

    cout << "Largest element: " << largest;

    return 0;
}
