#include <iostream>
using namespace std;
int main()
{
    char lecture;
    char going;
    cout << "Do you have class today(press Y for yes): ";
    cin >> lecture;
    cout << "Are your friends going? (press Y for yes): ";
    cin >> going;
    if (lecture == 'Y')
    {
        if (going == 'Y')
        {
            cout << "You are also going";
        }
    }
}