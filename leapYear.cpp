#include <iostream>

using namespace std;

int main()
{
    int year;

    cout << "Enter the year:";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << "Leap Year";
            }
            else
            {
                cout << "Not Leap Year";
            }
        }
        else
        {
            cout << "Leap Year";
        }
    }
    else
    {
        cout << "Not Leap year";
    }
}