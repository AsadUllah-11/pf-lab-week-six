#include <iostream>
using namespace std;
main()
{
    int numberOne;
    int numberTwo;
    int numberThree;
    cout << "Enter first number: ";
    cin >> numberOne;
    cout << "Enter second number: ";
    cin >> numberTwo;
    cout << "Enter third number: ";
    cin >> numberThree;
    if (numberOne > numberTwo)
    {
        if (numberOne > numberThree)
        {
            cout << numberOne << " is Greatest";
        }
    }
    if (numberTwo > numberOne)
    {
        if (numberTwo > numberThree)
        {
            cout << numberTwo << " is Greatest";
        }
    }
    if (numberThree > numberTwo)
    {
        if (numberThree > numberOne)
        {
            cout << numberThree << " is Greatest";
        }
    }
}