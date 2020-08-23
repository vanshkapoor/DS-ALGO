#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void buildit(int arr[], int i, int n)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (arr[l] > arr[largest] && l < n)
    {
        largest = l;
    }
    if (arr[r] > arr[largest] && r < n)
    {
        largest = r;
    }

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        buildit(arr, largest, n);
    }
}
void buildheap(int arr[], int n)
{
    for (int i = (n - 2) / 2; i >= 0; i--)
    {
        buildit(arr, i, n);
    }
}

void print(int arr[], int n, int i)
{
    if (i < n)
    {
        cout << arr[i] << " ";
        print(arr, n, 2 * i + 1);
        print(arr, n, 2 * i + 2);
    }
}

void heapify(int arr[], int i, int n)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (arr[largest] < arr[l] && l < n)
    {
        largest = l;
    }
    if (arr[largest] < arr[r] && r < n)
    {
        largest = r;
    }

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, largest, n);
    }
}

void deleteroot(int arr[], int &n)
{
    int last = arr[n - 1];
    arr[0] = last;

    n = n - 1;
    heapify(arr, 0, n);
}

void deleteindex(int arr[], int i, int n)
{
    // 1 - replace with INT_IN
    arr[i] = 0;
    // 2 - swap till root
    while (i > 0)
    {
        int parent = (i - 1) / 2;
        if (parent >= 0)
        {
            swap(arr[parent], arr[i]);
        }
        i = parent;
    }
    deleteroot(arr, n);
    // cout << arr[0];
}

// INSERT
void bottomupHeap(int arr[], int n, int i)
{
    int parent = (i - 1) / 2;

    if (parent >= 0)
    {
        if (arr[parent] < arr[i])
        {
            swap(arr[i], arr[parent]);
            bottomupHeap(arr, n, parent);
        }
    }
}

void insert(int arr[], int n, int key)
{
    n++;
    arr[n - 1] = key;

    bottomupHeap(arr, n, n - 1);
}

int main()
{
    int arr[] = {10, 5, 3, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    buildheap(arr, n);
    print(arr, n, 0);
    cout << endl;
    // deleteroot(arr, n);
    // print(arr, n, 0);
    cout << endl;
    deleteindex(arr, 4, n);
    print(arr, n, 0);

    return 0;
}