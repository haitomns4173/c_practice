#include <iostream>

using namespace std;

int main()
{
    int name;

    cout << "Enter your name : ";
    cin >> name;

    switch (name)
    {
    case 1:
        cout << "Your are my Boss!";
        break;

    case 2:
        cout << "Its me Computer!";
        break;

    case 3:
        cout << "Its Mobi/Andrue0";
        break;

    default:
        cout << "I am no body";
        break;
    }

    return 0;
}