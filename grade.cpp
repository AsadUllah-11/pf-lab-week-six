#include <iostream>
using namespace std;
char checkResult(int marks);
main()
{
    int marks;
    cout << "Enter Marks: ";
    cin >> marks;
    char result = checkResult(marks);
    cout << result;
}
char checkResult(int marks)
{
    char result;
    if (marks < 50)
    {
        result = 'F';
        return result;
    }
    else if (marks >= 50 && marks <= 60)
    {
        result = 'E';
        return result;
    }
    else if (marks > 60 && marks <= 70)
    {
        result = 'D';
        return result;
    }
    else if (marks > 70 && marks <= 80)
    {
        result = 'C';
        return result;
    }
    else if (marks > 80 && marks <= 85)
    {
        result = 'B';
        return result;
    }
    else if (marks > 85)
    {
        result = 'A';
        return result;
    }
}