#include <iostream>

using namespace std;

class Sum
{
    int n1, n2;

public:
    void
    get_sum()
    {
        cin >> n1 >> n2;
        cout << "The Sum is :" << n1 + n2;
    }
};

int main()
{
    Sum s;
    s.get_sum();
    return 0;
}