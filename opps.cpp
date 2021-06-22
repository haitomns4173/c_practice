#include <iostream>
#include <string>

using namespace std;

class Car
{
    string company_name;
    string model_name;
    string fule_type;
    float milage;
    double price;

public:
    void setData(string cname, string mname, string ftype, float m, double p)
    {
        company_name = cname;
        model_name = mname;
        fule_type = ftype;
        milage = m;
        price = p;
    }

    void displayData()
    {
        cout << "Car Proerties : " << endl;
        cout << "Car Company Name : " << company_name << endl;
        cout << "Car Fule Type : " << model_name << endl;
        cout << "Car Milage :" << milage << endl;
        cout << "Car Price :" << price << endl;
    }
};

int main()
{
    Car car1;
    car1.setData("BMW", "204", "Diseal", 400.4, 34000.3);
    car1.displayData();

    return 0;
}