#include <iostream>

using namespace std;

int alternatingCharacters(string s)
{

    char str[2] = {'A', 'B'};

    str[0] = s[0];
    if (str[0] == 'A')
    {
        str[1] = 'B';
    }
    else if (str[0] == 'B')
    {
        str[1] = 'A';
    }

    int index = 0;
    int cnt = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[index] == s[i])
        {
            index = index ^ 1;
        }
        else
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    //     char str[2] = {'a', 'b'};

    //     cout << str[0] << endl;

    //     string s = "ababa";

    //     str[0] = s[1];
    //     cout << str[0] << endl;

    cout << alternatingCharacters("AAAA");

    return 0;
}