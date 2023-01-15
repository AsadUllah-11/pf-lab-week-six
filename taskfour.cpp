#include <iostream>
using namespace std;
float totalIncome(string screening, int rows, int columns);
main()
{
    string screening;
    int rows, columns;
    cout << "Enter Type of Screening (Premiere, Normal, Discount): ";
    cin >> screening;
    cout << "Enter Number of Rows: ";
    cin >> rows;
    cout << "Enter Number of Columns: ";
    cin >> columns;
    float result;
    result = totalIncome(screening, rows, columns);
    cout << "Total Income Generated is: " << result << " EUR";
}
float totalIncome(string screening, int rows, int columns)
{
    int totalSeats = rows * columns;
    if (screening == "Premiere")
    {
        float amount = 12.00;
        float total = amount * totalSeats;
        return total;
    }
    else if (screening == "Normal")
    {
        float amount = 7.50;
        float total = amount * totalSeats;
        return total;
    }
    else if (screening == "Discount ")
    {
        float amount = 5.00;
        float total = amount * totalSeats;
        return total;
    }
}
