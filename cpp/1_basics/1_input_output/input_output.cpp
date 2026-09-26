#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // data types in c++
    //     | Data Type     | Size (Typical) | Example                      | Used in DSA?         |
    // | ------------- | -------------- | ---------------------------- | -------------------- |
    // | `int`         | 4 bytes        | `int x = 10;`                | ✅ Very Common        |
    // | `long`        | 4 or 8 bytes   | `long x = 100000;`           | ✅ Common             |
    // | `long long`   | 8 bytes        | `long long x = 10000000000;` | ✅ Very Common        |
    // | `short`       | 2 bytes        | `short x = 100;`             | ❌ Rare               |
    // | `char`        | 1 byte         | `char ch = 'A';`             | ✅ Common             |
    // | `bool`        | 1 byte         | `bool flag = true;`          | ✅ Very Common        |
    // | `float`       | 4 bytes        | `float pi = 3.14;`           | ❌ Rare               |
    // | `double`      | 8 bytes        | `double pi = 3.14159;`       | ✅ Sometimes          |
    // | `long double` | 10–16 bytes    | High precision               | ❌ Rare               |
    // | `string`      | Varies         | `string s = "Hello";`        | ✅ Very Common        |
    // | `void`        | No storage     | `void fun()`                 | ✅ Used for functions |

    int a, b; // Declare two integer variables

    cin >> a >> b; // Read two integers entered by the user and store them in a and b

    cout << a + b << endl; // Calculate the sum of a and b, then print it on the screen

    long c, d;
    cin >> c >> d;
    cout << c + d << endl;

    long long e, f;
    cin >> e >> f;
    cout << e + f << endl;

    float g, h;
    cin >> g >> h;
    cout << g + h << endl;

    double i, j;
    cin >> i >> j;
    cout << i + j << endl;

    string s1, s2;

    cout << "Enter the string 1:" << endl;
    cin >> s1;

    cout << "Enter the string 2:" << endl;
    cin >> s2;

    cout << s1 << " " << s2 << endl;

    return 0;
}