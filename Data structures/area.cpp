#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long variantsCount(int n, int s0, int k, int b, int m, long a)
{
    int *s = new int[n + 1];
    long cnt = 0;
    s[0] = s0;

    // s[] filled
    for (int i = 1; i < n; i++)
    {
        s[i] = ((k * s[i - 1] + b) % m) + 1 + s[i - 1];
        cout << s[i] << endl;
    }

    // find s[] pairs with product <=a
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (s[i] * s[j] <= a)
            {
                cout << s[i] << "-" << s[j] << endl;
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    cout << variantsCount(3, 1, 1, 1, 2, 4);

    return 0;
}