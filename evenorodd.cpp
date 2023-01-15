#include <iostream>
using namespace std;
string evenorodd(int number);
main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    string result = evenorodd(number);
    cout << result;
}
string evenorodd(int number)
{
    int reminder = number % 2;
    if (reminder == 0)
    {
        string result = "even";
        return result;
    }
    else
    {
        string result = "odd";
        return result;
    }
}