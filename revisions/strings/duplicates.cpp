#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "aaabcddddeff";
    int n = s.length();
    int j = 0;
    char temp[n];

    for (int i = 0; i < n - 1;)
    {
        // cout << s[i] << endl;

        if (s[i] != s[i + 1])
        {
            cout << s[i] << endl;
            temp[j] = s[i];
            j++;
        }

        i++;
    }

    // for (int k = 0; k < strlen(temp); k++)
    // {
    //     cout << temp[k];
    // }

    return 0;
}