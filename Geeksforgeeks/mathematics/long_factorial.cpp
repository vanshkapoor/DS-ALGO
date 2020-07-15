// hackerrank solution

#include <bits/stdc++.h>

using namespace std;

void multiply(int x, int &res_size, int res[])
{
    int carry = 0;

    for (int i = 0; i < res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
}

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n)
{
    int res[500];
    int res_size = 1;
    res[0] = 1;

    for (int i = 2; i <= n; i++)
    {
        multiply(i, res_size, res);
    }

    for (int i = res_size - 1; i >= 0; i--)
    {
        cout << res[i];
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}
