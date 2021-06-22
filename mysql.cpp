#include <iostream>
#include <mysql.h>

using namespace std;

MYSQL mysql, *connection;
MYSQL_RES result;
MYSQL_ROW row;

char *ip = (char *)"192.168.1.203";
char *usr = (char *)"root";
char *pass = (char *)"";
char *db = (char *)"demoTest";

int query_state;

int main(int argc, char **argv)
{
    mysql_init(&mysql);

    connection = mysql_real_connect(&mysql, ip, usr, pass, db, 0, NULL, 0);

    if (connection == NULL)
    {
        cout << mysql_error(&mysql) << endl;
    }

    else
    {
        (mysql_query(&mysql, "INSERT into 'demoTest'.'user' (fname', 'sname') VALUES ('rana', 'sameer')"));
        if (query_state != 0)
        {
            cout << mysql_error(connection) << endl;
            return 1;
        }
    }
    mysql_close(&mysql);
}