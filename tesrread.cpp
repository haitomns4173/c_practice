#include <fstream>
#include <conio.h>
#include <iostream>

using namespace std;

class Student
{

    int roll;
    char name[25];
    float marks;

    void putdata()
    {

        cout << "\n\t" << roll << "\t" << name << "\t" << marks;
    }

public:
    void Display()
    {

        fstream f;
        Student Stu;

        f.open("Student.dat", ios::in | ios::binary);

        cout << "\n\tRoll\tName\tMarks\n";

        while ((f.read((char *)&Stu, sizeof(Stu))))
            Stu.putdata();

        f.close();
    }
};

int main()
{

    Student S;

    S.Display();
}