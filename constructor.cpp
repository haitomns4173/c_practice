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
    //Default Constructor
    Car()
    {
        cout << "Default Constructor Called" << endl;
        company_name = "Tata";
        model_name = "Nano";
        fule_type = "Petrol";
        milage = 509;
        price = 23;
    }

    //Parameterized Constructor
    Car(string cname, string mname, string ftype, float m, double p)
    {
        cout << "Parameterized Constructor Called" << endl;
        company_name = cname;
        model_name = mname;
        fule_type = ftype;
        milage = m;
        price = p;
    }

    //Copy Constructor
    Car(Car &obj)
    {
        cout << "Copy Constructor Called" << endl;
        company_name = obj.company_name;
        model_name = obj.model_name;
        fule_type = obj.fule_type;
        milage = obj.milage;
        price = obj.price;
    }

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
        cout << "Car Proerties--" << endl;
        cout << "Car Company Name : " << company_name << endl;
        cout << "Car Fule Type : " << model_name << endl;
        cout << "Car Milage :" << milage << endl;
        cout << "Car Price :" << price << endl
             << endl;
    }
};

int main()
{
    Car car1, car2("BMW", "204", "Diseal", 400.4, 34000.3);
    car1.displayData();
    car2.displayData();
    Car car3 = car2;
    car3.displayData();

    return 0;
}