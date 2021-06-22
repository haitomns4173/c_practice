#include<iostream>
#include <winsock.h>
#include<mysql.h>

using namespace std;

int main()
{
    MYSQL* conn;
    //conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "cpp_test", 3306 , NULL, 0);
    if (conn)
    {
        cout << "\n\nconnected!";
    }
    else 
    {
        cout << "\n\nnot connected";
    }
}

//  host="localhost",user="python_program",password="123",database="cpp_test"