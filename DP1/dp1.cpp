#include <iostream>

using namespace std;

int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int a = fibo(n - 1);
    int b = fibo(n - 2);
    return a + b;
}

// memoization
int fibo_helper(int n, int ans[])
{
    if (n <= 1)
    {
        return n;
    }

    // check
    if (ans[n] != -1)
    {
        return ans[n];
    }
    int a = fibo_helper(n - 1, ans);
    int b = fibo_helper(n - 2, ans);
    ans[n] = a + b;
    return a + b;
    // return (ans[n] = fibo_helper(n-1,ans) + fibo_helper(n-2,ans))  //SHORTCUT
}

int fibo2(int n)
{
    int *arr = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        arr[i] = -1;
    }
    return fibo_helper(n, arr);
}

int main()
{
    int n;

    n = fibo(7);
    cout << "n";

    return 0;
}