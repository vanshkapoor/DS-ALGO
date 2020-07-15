#include <iostream>

using namespace std;

void caesarCipher(string s, int k)
{

    char ch;
    for (int i = 0; i < s[i] != '\0'; i++)
    {
        ch = s[i];
        if (ch >= 'a' && ch <= 'z')
        {
            // ch = s[i];
            ch += k;
            if (ch > 'z')
            {
                ch = ch - 'z' + 'a' - 1;
            }
            s[i] = ch;
            cout << s[i];
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            // ch = s[i];
            ch += k;
            if (ch > 'Z')
            {
                ch = ch - 'Z' + 'A' - 1;
            }
            s[i] = ch;
            cout << s[i];
        }
    }
    // return s;
}

int main()
{
    string s = "ibcd";

    // cout << s[0] + 1;
    // s[0] = s[0] + 1;
    cout << s[0] << endl;

    // cout << char(int(s[0] + 4 - 97) % 26 + 97) << endl;

    // cout << char(int(s[0] + 4 - 97) % 26);

    char ch = s[0];
    ch = ch + 26;
    s[0] = ch - 'z' + 'a' - 1;
    cout << s[0] << endl;

    // caesarCipher("Ciphering.", 26);
    // string cs =  s.substr(1);
    string cs = s;
    // int cs = stoi(s.substr(0, 1));
    // cout << cs;
    if (s.equals(cs))
    {
        cout << "true";
    }

    return 0;
}