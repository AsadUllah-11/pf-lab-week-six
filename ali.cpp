#include <iostream>
using namespace std;
main()
{
    int rollNumber;
    string name;
    cout << "Enter Your Name: ";
    cin >> name;

    cout << "Enter Your Roll Number: ";
    cin >> rollNumber;

    if (rollNumber == 501)
    {
        if (name == "Ali")
        {
            cout << "CONGRATULATIONS";
        }
    }
}