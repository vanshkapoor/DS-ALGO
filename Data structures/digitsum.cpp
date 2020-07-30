#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

string digitsum(string num)
{
    if (num.length() == 1)
    {
        return num;
    }

    int rem = 0;

    while (num.length() > 0)
    {
        rem += (int)num[0] - '0';
        // rem += num[0]%10;
        // rem+=num%10;
        // num = num/10;
        num = num.substr(1, num.length());
    }

    return digitsum(to_string(rem));
}

int superDigit(string n, int k)
{

    while (k > 0)
    {
        n += n;
        k--;
    }
    int num;
    n = digitsum(n);
    istringstream(n) >> num;
    return num;
}

int main()
{
    cout << superDigit("123", 3);

    return 0;
}