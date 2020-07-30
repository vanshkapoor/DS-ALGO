#include <iostream>

using namespace std;

int main()
{
    string s = "ac";
    char a = 'a';
    char b = 'c';

    if (a > b)
    {
        cout << "a";
    }
    else
    {
        b--;
        b--;
        if (a == b)
        {
            cout << "equal";
        }
        else
        {
            cout << "not equal";
        }
        // cout << "b";
    }

    // if (s[0] > s[1])
    // {
    //     cout << "a";
    // }
    // else
    // {
    //     s[1]--;
    //     if (s[0] == s[1])
    //     {
    //         cout << "equal";
    //     }
    //     else
    //     {
    //         cout << "not equal";
    //     }
    //     // cout << "b";
    // }

    string ss = "vansh";
    // cout << ss.indexOf("an");

    return 0;
}