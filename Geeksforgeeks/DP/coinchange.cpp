#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int coinchange(int arr[], int m, int n)
{
    if (m == 0)
    {
        return 1;
    }

    if (m < 0)
    {
        return 0;
    }

    if (n <= 0 && m >= 1)
    {
        return 0;
    }

    return coinchange(arr, m - arr[n - 1], n) + coinchange(arr, m, n - 1);
}

int mincoinchange(int arr[], int m, int n, int ctr)
{
    if (m == 0)
    {
        // return ctr;
        return 1;
    }

    if (m < 0)
    {
        return -1;
    }

    if (n <= 0 && m >= 1)
    {
        return -1;
    }

    return min(mincoinchange(arr, m - arr[n - 1], n, ctr + 1) + 1, mincoinchange(arr, m, n - 1, ctr + 1) + 1);
}

int main()
{
    int arr[] = {9, 6, 5, 1};
    int m = 11;

    cout << coinchange(arr, m, 4);
    cout << endl;
    cout << mincoinchange(arr, m, 4, 0);

    return 0;
}