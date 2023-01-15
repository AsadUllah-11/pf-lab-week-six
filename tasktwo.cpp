#include <iostream>
using namespace std;
string checkTitle(int age, char gender);
main()
{
    int age;
    char gender;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Gender(m or f): ";
    cin >> gender;
    string result;
    result = checkTitle(age, gender);
    cout << "Your Title is " << result;
}
string checkTitle(int age, char gender)
{
    if (gender == 'm' && age >= 16)
    {
        string result;
        result = "Mr.";
        return result;
    }
    else if (gender == 'm' && age < 16)
    {
        string result = "Master";
        return result;
    }
    else if (gender == 'f' && age >= 16)
    {
        string result = "Ms.";
        return result;
    }
    else if (gender == 'f' && age < 16)
    {
        string result = "Miss";
        return result;
    }
}