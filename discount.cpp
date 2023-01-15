#include <iostream>
using namespace std;
float discount(string day, string month, float amount);
main()
{

    string day;
    string month;
    float amount;
    cout << "Enter Day: ";
    cin >> day;
    cout << "Enter Month: ";
    cin >> month;
    cout << "Enter Original Amount: ";
    cin >> amount;
    float result = discount(day, month, amount);
    cout << "Amount After Discount is: " << result;
}
float discount(string day, string month, float amount)
{
    float payable = amount;
    if (day == "Sunday" && month == "October")
    {
        float discount = 0.1 * amount;
        payable = amount - discount;
    }
    else if (day == "Sunday")
    {
        float discount = 0.05 * amount;
        payable = amount - discount;
    }
    return payable;
}