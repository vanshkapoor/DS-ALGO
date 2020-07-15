#include <iostream>

using namespace std;

int main()
{
    string s = "wertyuio";

    int str[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        str[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << str[i];
    }

    return 0;
}