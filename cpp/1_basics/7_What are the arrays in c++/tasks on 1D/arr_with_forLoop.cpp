#include <bits/stdc++.h>
using namespace std;

int main()
{
    // This is an example of 1D array
    int arr[10]; //This will only store the 10 numbers not the 50
    
    // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    // what if there are 50 numbers to store in the array
    // Then we use for loop
    
    for (int i = 0; i <= 50; i++) // this will take up to 50 numbers from the users
    {
        cin >> arr[i];
    }
    
    cout << "The number at index 3 is " << arr[3];
    
    
    return 0;
    
        // for i in range(0,50): this for loop is in python
        // same concept but different syntax
        /*
        | C++ part    | Meaning        | Python equivalent      |
        | ----------- | -------------- | ---------------------- |
        | `int i = 0` | Start at 0     | `range(0, ...)`        |
        | `i < 50`    | Stop before 50 | `range(..., 50)`       |
        | `i++`       | Increase by 1  | automatic in `range()` |
        
        // same program in python 
        arr = []
    
        print("Enter 5 numbers:")
    
        for i in range(0, 5):
            number = int(input())
            arr.append(number)
    
        print("The number at index 3 is", arr[3])
            */
}