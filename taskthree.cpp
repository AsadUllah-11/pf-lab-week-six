#include <iostream>
using namespace std;
string checkSpeed(float speed);
main()
{
    float speed;
    cout << "Enter Speed: ";
    cin >> speed;
    string result;
    result = checkSpeed(speed);
    cout << "Your Speed is " << result;
}
string checkSpeed(float speed)
{
    string result;
    if (speed <= 10)
    {
        result = "slow";
        return result;
    }
    else if (speed > 10 && speed <= 50)
    {
        result = "average";
        return result;
    }
    else if (speed > 50 && speed <= 150)
    {
        result = "fast";
        return result;
    }
    else if (speed > 150 && speed <= 1000)
    {
        result = "ultra-fast";
        return result;
    }
    else
    {
        result = "extremely fast";
        return result;
    }
}