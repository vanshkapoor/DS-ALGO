#include <iostream>

using namespace std;

void process(int *arr, int sum, int size)
{
    int head = 0;
    int nsum = arr[0];

    for (int i = 1; i < size; i++)
    {
        cout << nsum << endl;
        while (nsum > sum && head < i - 1 && i < size)
        {
            nsum = nsum - arr[head];
            head++;
            if (head > size + 1)
            {
                break;
            }
        }
        if (nsum == sum)
        {
            cout << head + 1 << " " << i + 1;
            cout << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main()
{
    int t = 0;
    int size = 0;
    int sum = 0;
    // int arr[] = {1, 2, 3, 7, 5};
    // process(arr, 12, 5);
    cin >> t;
    while (t--)
    {
        cin >> size;
        cin >> sum;
        int *arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        process(arr, sum, size);
        //delete[] arr;
    }
    return 0;
}