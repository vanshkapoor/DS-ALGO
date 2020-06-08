#include <iostream>

using namespace std;

void merge_sort(int arr[], int left[], int right[], int ls, int rs)
{
    int i = 0, j = 0, k = 0;
    while (i < ls && j < rs)
    {
        if (left[i] < right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
        }
    }

    while (i < ls)
    {
        arr[k++] = left[i++];
    }

    while (j < rs)
    {
        arr[k++] = right[j++];
    }
}

void merge(int arr[], int n)
{
    if (n / 2 <= 0)
    {
        return;
    }
    int left[10000];
    int right[10000];
    int mid = n / 2;
    for (int i = 0; i < mid; i++)
    {
        left[i] = arr[i];
    }
    for (int i = mid; i < n; i++)
    {
        right[i - mid] = arr[i];
    }

    merge(left, mid);
    merge(right, n - mid);
    merge_sort(arr, left, right, mid, n - mid);
}

int main()
{
    int arr[] = {1, 2, 5, 3, 9, 8, 5, 7, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    merge(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}