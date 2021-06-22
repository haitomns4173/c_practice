#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;

// Function for printing the top Part of Program
void topPrint()
{
    system("cls");
    cout << "  Haitomns System!" << endl
         << endl;
}

//Function for setting the pointer location
void setPointer(short int xpnt, short int ypnt)
{
    COORD position = {xpnt, ypnt};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

// Class Used for Login of the registered users
class Login : public Registeration
{
protected:
    string username, password;

public:
    void inputUsernamePasword()
    {
        topPrint();
        cout << "  Username : ";
        cout << "  Password : ";
        setPointer(18, 8);
        cin >> username;
        setPointer(18, 8);
        cin >> password;
        checkPassword(username, password);
    }

    void checkPassword(string username, string password)
    {
        string temp_username, temp_password;
        temp_username = username;
        temp_password = password;

        fstream regFileRead;
        // Registeration regReadData;

        regFileRead.open("Registeration.txt", ios::in | ios::binary);

        while ((regFileRead.read((char *)&regFirst, sizeof(regFirst))))
        {
            if (temp_username.compare(username) == 0 && temp_password.compare(password))
            {
                cout << endl
                     << endl
                     << "Logined!";
            }
        }

        regFileRead.close();
    }
};

// Derived Class for registeration of users from the login
class Registeration : public Login
{
protected:
    string first_name, last_name, age, address, phone_no, email;

public:
    void inputRegisterationData()
    {
        topPrint();
        cout << "  1. First Name : " << endl;
        cout << "  2. Last Name  : " << endl;
        cout << "  3. Age        : " << endl;
        cout << "  4. Address    : " << endl;
        cout << "  5. Phone      : " << endl;
        cout << "  6. Emaill     : " << endl;
        cout << "  7. Username   : " << endl;
        cout << "  9. Password   : " << endl;
        setPointer(18, 2);
        cin >> first_name;
        setPointer(18, 3);
        cin >> last_name;
        setPointer(18, 4);
        cin >> age;
        setPointer(18, 5);
        cin >> address;
        setPointer(18, 6);
        cin >> phone_no;
        setPointer(18, 7);
        cin >> email;
        setPointer(18, 8);
        cin >> username;
        setPointer(18, 9);
        cin >> password;
    }

    void writeToRegfile()
    {
        fstream regFile;
        Registeration regAddData;

        regFile.open("Registeration.txt", ios::app | ios::binary);
        regAddData.inputRegisterationData();
        regFile.write((char *)&regAddData, sizeof(regAddData));

        regFile.close();
        int main();
    }
};

int main()
{
    int select_menu;
    Login loginFirst;
    Registeration regFirst;

    // Menu of Program
    topPrint();
    cout << "  1. Login" << endl
         << "  2. Registeration" << endl
         << "  3. Exit" << endl
         << endl
         << "  Enter the number : ";
    cin >> select_menu;

    // Selection of Menu
    switch (select_menu)
    {
    case 1:
        loginFirst.inputUsernamePasword();
        break;
    case 2:
        regFirst.writeToRegfile();
        break;
    }

    return 0;
}
