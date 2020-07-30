#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

int minimumNumber(int n, string password)
{
    // Return the minimum number of characters to make the password strong
    int no_req = 0;
    int req = 0;
    int lower = false;
    int upper = false;
    int digit = false;
    int special = false;
    if (n < 6)
    {
        if (n <= 2)
        {
            return 6 - n;
        }
        else
        {
            no_req = 6 - n;
        }
    }
    for (int i = 0; password[i] != '\0'; i++)
    {
        if (password[i] >= 'a' && password[i] <= 'z')
        {
            lower = true;
        }
        else if (password[i] >= 'A' && password[i] <= 'Z')
        {
            upper = true;
        }
        else if ((int(password[i]) - '0') >= 0 && (int(password[i]) - '0') <= 9)
        {
            digit = true;
        }
        else
        {
            cout << "i" << i << endl;
            special = true;
        }
    }

    if (!upper)
    {
        req++;
    }
    if (!lower)
    {
        req++;
    }
    if (!digit)
    {
        req++;
    }
    if (!special)
    {
        req++;
    }
    cout << no_req << " - " << req;
    return max(req, no_req);
}

int main()
{
    char str[] = "12:00:00PM";

    int n = strlen(str);
    cout << n;
    cout << str[n - 2];
    // char st = str.split(":");
    char *token = strtok(str, ":");
    cout << token;

    // stringstream ss(token);
    // int x = 0;
    // ss > x;
    // cout << "\n"
    //      << x;

    int num1 = atoi(token);
    cout << num1;

    // if(str[n-2] == 'P')
    // {

    // }else{

    // }

    cout << endl;
    cout << endl;
    cout << (int)str[0] - '0';
    string c;
    int num = 5;
    c = num + '2';
    cout << endl;

    cout << c;

    string s = "1234567890";
    // int nn = strlen(s);
    cout << s.length();
    if ((int)s[2] - '2' == 1)
    {
        cout << "integer";
    }
    cout << endl;
    // cout << minimumNumber(4, "goxg");
    char a = s[0];
    cout << a;
    return 0;
}