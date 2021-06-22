#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <conio.h>

using namespace std;

//Function for setting the pointer location in print screen
void setPointer(short int xpnt, short int ypnt)
{
    COORD position = {xpnt, ypnt};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

// Prints the initial parts
void initial_Print()
{
    string input;

    setPointer(0, 2);
    cout << "\t\t\t\t\t-------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t|  AI DNEIRFLRIG                                                                    |" << endl;
    cout << "\t\t\t\t\t-------------------------------------------------------------------------------------" << endl;
    setPointer(0, 42);
    cout << "\t\t\t\t\t -----------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t(                                                                                   )" << endl;
    cout << "\t\t\t\t\t -----------------------------------------------------------------------------------" << endl;
    setPointer(0, 43);
    cin >> input;
}

// Settings for the AI
void user_setting()
{
    int setting_choose;

    system("cls");

    cout << "\t\t\t USER SETTINGS" << endl
         << endl;
    cout << "1. Erase Data" << endl;
    cout << "2. Reset AI" << endl;
    cout << "3. Exit Program" << endl;
    cout << "4. Back to AI" << endl;

    cin >> setting_choose;

    switch (setting_choose)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    default:
        cout << "Wrong Input, Enter to redo. ";
        break;
    }
}

// It handels all the input form the user
char input_handler(char input_user)
{
    if (input_user == '.')
    {
        user_setting();
    }
    else
    {
        getch();
    }
    return 0;
}

int main()
{
    initial_Print();
    getch();
    return 0;
}