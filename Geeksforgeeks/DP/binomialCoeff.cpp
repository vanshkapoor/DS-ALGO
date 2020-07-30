#include <iostream>

using namespace std;

int binomialcoeff(int n, int r)
{
    int bcn[n + 1][r + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= min(i, r); j++)
        {
            if (i == j || j == 0)
            {
                bcn[i][j] = 1;
            }
            else
            {
                bcn[i][j] = bcn[i - 1][j - 1] + bcn[i - 1][j];
            }
        }
    }
    return bcn[n][r];
}

int main()
{
    int n = 5;
    int r = 2;

    // 5-C-2

    cout << binomialcoeff(n, r);

    return 0;
}