#include <iostream>

using namespace std;

void print(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
}

int beautifulBinaryString(string b)
{
    string bn = "010";
    int cnt = 0;
    int pre_i = 0;
    for (int i = 0; i <= b.length() - 3; i++)
    {
        pre_i = i;
        cout << "i =" << i << endl;
        int mn = 0;
        for (int j = 0; j < 3; j++)
        {
            if (b[i + j] == bn[j])
            {
                mn++;
            }
            else
            {
                break;
            }
            print(b);
            cout << " ";
            print(bn);
            cout << endl;
        }
        if (mn == 3)
        {
            cout << "mn==3" << endl;
            b[i + 2] = '1';
            cnt++;
            // print(b);
            cout << endl;
            i = pre_i - 1;
        }
    }

    return cnt;
}

int main()
{
    string s = "01011010";

    cout << beautifulBinaryString(s);

    return 0;
}