/*
### 🟢 Array Task 1 — Print Array Elements

Write a C++ program that:

1. Creates an integer array of **5 elements**.
2. Takes **5 numbers from the user**.
3. Stores them in the array.
4. Prints all 5 elements using a `for` loop.

**Example:**

```text
Input:
10 20 30 40 50

Output:
10 20 30 40 50
```

**Hint:** Use:

```cpp
int arr[5];
```

and a `for` loop to take input and print the elements.

Try it yourself first — **don't worry about making it perfect.**

*/

#include <bits/stdc++.h>
using namespace std;
class elementPrinting
{
public:
    void takearr(int arr[10])
    {

        // Printing the elements
        cout<<"Printing the array"<<endl;
        for (int i = 0; i < 10; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    int arr[10];
    cout << "Enter the numbers"<<endl;
    // Taking the user input

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    
    elementPrinting obj;
    obj.takearr(arr);

    return 0;
}
