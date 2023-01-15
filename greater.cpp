#include <iostream>
using namespace std;
float maximum(float number1, float number2, float number3);
main()
{
    int number1, number2, number3;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    cout << "Enter third number: ";
    cin >> number3;
    float result = maximum(number1, number3, number3);
    cout << result << " is maximum";
}
float maximum(float number1, float number2, float number3)
{
    if (number1 > number2 && number1 > number3)
    {
        return number1;
    }
    if (number2 > number1 && number2 > number3)
    {
        return number2;
    }
    if (number3 > number1 && number3 > number2)
    {
        return number3;
    }
}
