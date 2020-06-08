#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 5, 4, 3, 2, 9, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        int min = arr[i];
        k = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                k = j;
            }
        }
        // swap(arr[i],arr[k]);
        int temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}
