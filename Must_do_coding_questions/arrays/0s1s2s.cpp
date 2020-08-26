#include <iostream>

using namespace std;

int main()
{
    int arr[] = {0, 0, 1, 0, 2, 1, 0, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int l = 0;
    int m = 0;
    int h = n - 1;
    while (m <= h)
    {
        switch (arr[m])
        {
        case 0:
            swap(arr[l], arr[m]);
            m++;
            l++;
            /* code */
            break;
        case 1:
            m++;
            break;

        case 2:
            swap(arr[m], arr[h]);
            h--;
            break;
        default:
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    // for (auto i : arr)
    // {
    //     cout << i << "-";
    // }

    return 0;
}