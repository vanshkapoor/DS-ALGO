#include <iostream>

using namespace std;

void display(int arr[], int m);

// FACTORIAL
void factorial(int arr[], int m)
{
    for (int i = 1; i <= m + 1; i++)
    {
        arr[i] = arr[i - 1] * i;
    }
    display(arr, m + 1);
}
void factorialHelper(int m)
{
    int arr[100];
    arr[0] = 1;
    factorial(arr, m);
}

// FIBONACCI
void fibo(int m)
{
    int a[20];
    a[0] = 0;
    a[1] = 1;

    for (int i = 2; i < m; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    display(a, m);
}

// void check(int arr[])
// {
//     arr[1] = arr[0] + 1;
//     cout << "function : " << arr[1];
// }

void display(int arr[], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << i << ":" << arr[i] << endl;
    }
}

int main()
{
    // int arr[100];
    // arr[0] = 1;

    // check(arr);
    // cout << arr[1];
    factorialHelper(5);
    cout << endl
         << "FIBONACCAI" << endl;
    fibo(8);
    return 0;
}