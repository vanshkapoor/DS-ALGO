#include <iostream>

using namespace std;

int main()
{
    string s = "abbaaacdefffeeeg";
    // to get: abbcdeg
    string res;
    int k = 3;

    int i = 0;
    while (s[i])
    {
        if (s[i] != s[i + 1])
        {
            res += s[i];
            i++;
        }
        int j = i;

        if (s[i + 1] && s[i] == s[i + 1])
        {
            int m = 1;
            string ns = "";
            while (s[i + 1] && s[i + 1] == s[i])
            {
                ns += s[i];
                m++;
                i++;
            }
            if (m == k)
            {
                i++;
            }
            else
            {
                res += ns;
                // i = j;
            }
        }
    }

    cout << res;

    return 0;
}