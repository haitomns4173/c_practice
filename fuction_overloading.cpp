#include <iostream>

using namespace std;

class Addition
{
public:
    void add(int num, int num2)
    {
        cout << "Addition " << num + num2 << endl;
    }

    void add(int num, int num2, int num3)
    {
        cout << "Additon " << num + num2 + num3 << endl;
    }
};

int main()
{
    Addition a1, a2;

    a1.add(1, 2);
    a2.add(2, 3, 4);

    return 0;
}