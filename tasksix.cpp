#include <iostream>
using namespace std;
string greaterNumber(int, int, int);
main()
{
    int number1, number2, number3;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    cout << "Enter third numbe: ";
    cin >> number3;
    string result;
    result = greterNumber(number1, number2, number3);

    if (result == "true")
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
string greaterNumber(int, int, int)
{
    if ((number1 == number2) && (number2 == number3))
    {
        return true;
    }
    else
    {
        return false;
    }
}