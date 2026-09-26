// SUPERMARKET BILLING SYSTEM
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Get the number of products purchased by the customer
    int number_of_products;
    cout << "How much products do you purchased : ";
    cin >> number_of_products;

    // Arrays for storing product details
    string Product_name[100];
    int price[100];
    int Quantity[100];

    // Variables for calculating the total and discount
    double Grand_total = 0;
    double discount_percentage = 0;
    double discount_amount = 0;
    double final_amount = 0;

    // loop variable
    int i;

    for (i = 0; i < number_of_products; i++)
    {
        // Get the product details from the customer
        cout << i + 1 << " .Enter the product name : " << endl;
        cin >> Product_name[i];

        cout << "Enter the product price : " << endl;
        cin >> price[i];

        cout << "Enter the product quantity : " << endl;
        cin >> Quantity[i];

        // Calculate and display the total price of the current product immediately
        double product_total = price[i] * Quantity[i];
        cout << "Your " << i + 1 << "th product is : " << Product_name[i] << ": total for this product is  : " << product_total << endl;

        // Add the current product total to the grand total
        Grand_total = Grand_total + product_total;
    }

    // discount in percentage according to grand total
    if (Grand_total >= 0 and Grand_total <= 999)
    {
        discount_percentage = 0;
    }
    else if (Grand_total >= 1000 and Grand_total <= 4999)
    {
        discount_percentage = 5;
    }
    else if (Grand_total >= 5000 and Grand_total <= 9999)
    {
        discount_percentage = 10;
    }
    else if (Grand_total >= 10000)
    {
        discount_percentage = 15;
    }

    // calculating the discounted amount
    discount_amount = Grand_total * discount_percentage / 100.0;

    // Calculating the final amount
    final_amount = Grand_total - discount_amount;

    // Display the final bill
    cout << "You purchased total " << i << " products" << endl
         << "Your Bill is : " << Grand_total << endl;

    cout << "Discount you have got :" << discount_amount << " Rs" << endl;
    cout << "Final discounted amount : " << final_amount << endl;

    return 0;
}