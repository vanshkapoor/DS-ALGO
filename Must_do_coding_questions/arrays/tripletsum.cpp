#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pairsum(int *arr, int n, int sum)
{
    int l = 0;
    int r = n - 1;
    sort(arr, arr + n);

    while (l < r)
    {
        /* code */
        if (arr[l] + arr[r] == sum)
        {
            cout << arr[l] << " " << arr[r];
            return;
        }
        else if (arr[l] + arr[r] > sum)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
}

void tripletsum(int *arr, int n, int sum)
{
    for (int i = 0; i < n - 2; i++) //leaving end 2 elements
    {
        int l = i + 1;
        int r = n - 1;

        while (l < r)
        {
            if (arr[l] + arr[r] + arr[i] == sum)
            {
                cout << arr[l] << "-" << arr[r] << "-" << arr[i];
                return;
            }
            else if (arr[l] + arr[r] + arr[i] < sum)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 3, 5, 9, 7, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    pairsum(arr, n, 4);
    cout << endl;
    tripletsum(arr, n, 10);

    return 0;
}
