#include <iostream>

using namespace std;

int main()
{
    int multiplier = 5, number = 1, result = 0;

    for (number; number <= 10; number++)
    {
        result = multiplier * number;
        cout << multiplier << "*" << number << "=" << result << endl;
        ;
    }
    return 0;
}