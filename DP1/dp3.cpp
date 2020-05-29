#include <iostream>

using namespace std;

// BASIC ONE
int min_step(int n, int count)
{
    // base condition
    if (n <= 1)
    {
        return count;
    }

    if (n % 3 == 0)
    {
        min_step(n / 3, 1 + count);
    }
    else if (n % 2 == 0)
    {
        min_step(n / 2, 1 + count);
    }
    else
    {
        min_step(n - 1, 1 + count);
    }
}

// BASIC RECURSION ONE
int min_step2(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    int x = min_step2(n - 1);
    int y = INT16_MAX, z = INT16_MAX;

    if (n % 2 == 0)
    {
        y = min_step2(n / 2);
    }

    if (n % 3 == 0)
    {
        z = min_step2(n / 3);
    }

    int ans = min(x, min(y, z)) + 1;
    return ans;
}

// MEMOISATION
int min_step3(int n, int arr[])
{
    if (n <= 1)
    {
        return 0;
    }
    if (arr[n] != -1)
    {
        return arr[n];
    }

    int y = INT16_MAX, z = INT16_MAX;

    int x = min_step3(n - 1, arr);

    if (n % 2 == 0)
    {
        y = min_step3(n / 2, arr);
    }

    if (n % 3 == 0)
    {
        z = min_step3(n / 3, arr);
    }

    int ans = min(x, min(y, z)) + 1;
    arr[n] = ans;
    return ans;
}

int min_step2_helper(int n)
{
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = -1;
    }
    min_step3(n, arr);
}

int main()
{
    int n, count = 0;
    cin >> n;

    int m = min_step(n, count);
    // int m1 = min_step2(n);
    cout << m;
    // cout<<m<<" & "<<m1;

    return 0;
}