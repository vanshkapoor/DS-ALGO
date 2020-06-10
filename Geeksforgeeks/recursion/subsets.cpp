#include <iostream>
#include <string.h>

using namespace std;

void subset(char subs[], char str[], int n, int i)
{
    if (n == i)
    {
        cout << subs << endl;
        return;
    }

    // case 1: call fn without including i
    subs[i] = '\0';
    subset(subs, str, n, i + 1);
    subs[i] = str[i];
    subset(subs, str, n, i + 1);
}

void subset_helper(char str[], int n)
{
    char subs[n + 1];
    subset(subs, str, n + 1, 0);
}

int main()
{
    char str[] = "abc";
    int n = strlen(str);
    // cout << n;

    subset_helper(str, n - 1);

    return 0;
}