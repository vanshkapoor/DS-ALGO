#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// MEMOIZATION: TOP DOWN
int fibo(int arr[], int n)
{
    if (n <= 1)
    {
        return n;
    }

    if (arr[n] != -1)
    {
        return arr[n];
    }
    int a = fibo(arr, n - 1);
    int b = fibo(arr, n - 2);
    arr[n] = a + b;
    return a + b;
}

int fibohelper(int n)
{
    n++;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = -1;
    }

    return fibo(arr, n - 1);
}

// factorial
// 5*4*3*2*1
void fact(int n)
{
    int *arr = new int[n + 1];
    arr[0] = 1;
    for (int i = 1; i < n + 1; i++)
    {
        arr[i] = arr[i - 1] * (i + 1);
    }
    cout << arr[n];
}

int main()
{
    cout << fibohelper(5);
    fact(5);
    return 0;
}
