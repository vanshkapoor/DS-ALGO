#include <iostream>

using namespace std;

int palindrome(char str[], int s, int e)
{
    if (s >= e)
    {
        return 1;
    }

    if (str[s] == str[e])
    {
        palindrome(str, s + 1, e - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str[] = "vanshsnav";
    int s = 0;
    int e = sizeof(str) / sizeof(str[0]);
    // cout << e;
    cout << palindrome(str, s, e - 2);

    return 0;
}