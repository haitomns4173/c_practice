#include<iostream>

using namespace std;

class Box
{
public:
    double length, breadth, height;
};

int main()
{
    Box b1;
    double voulume;
    b1.length = 4;
    b1.breadth = 2;
    b1.height = 3;

    voulume = b1.length * b1.breadth * b1.height;
    cout << "Volume of box : " << voulume;
    return 0;
}