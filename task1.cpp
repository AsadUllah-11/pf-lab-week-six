#include <iostream>
using namespace std;
main()
{
    string brand;
    int price;
    cout << "Enter Price: ";
    cin >> price;
    cout << "Enter Brand: ";
    cin >> brand;
    if (price < 1500 && brand == "MTJ")
    {
        cout << "Buy the Dress ";
    }
    else
    {
        cout << "Don't Buy the Dress";
    }
}