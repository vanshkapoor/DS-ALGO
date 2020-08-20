#include <iostream>
#include <queue>

using namespace std;

void buildit(int arr[], int n, int i)
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
        buildit(arr, n, largest);
    }
}

void buildheap(int arr[], int n)
{
    for (int i = (n - 2) / 2; i >= 0; i--)
    {
        buildit(arr, n, i);
    }
}

void print(int arr[], int n)
{
    queue<int> q;
    q.push(0);
    while (!q.empty())
    {
        int j = q.front();
        cout << arr[j];
        q.pop();
        if (2 * j + 1 < n)
        {
            q.push(2 * j + 1);
        }
        if (2 * j + 2 < n)
        {
            q.push(2 * j + 2);
        }
    }
}

int main()
{

    int arr[] = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    int n = sizeof(arr) / sizeof(arr[0]);

    print(arr, n);
    cout << endl;
    buildheap(arr, n);
    print(arr, n);

    return 0;
}