#include <iostream>

using namespace std;

int main()
{

    int arr1[] = {1, 2, 3, 4, 5, 9, 11, 12};
    int arr2[] = {1, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int i = 0, j = 0;

    while (i < n || j < m)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << endl;
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            cout << arr1[i] << endl;
            i++;
        }
        else
        {
            cout << arr2[j] << endl;
            j++;
        }
    }

    while (i < n)
    {
        cout << arr1[i] << endl;
        i++;
    }

    while (j < m)
    {
        cout << arr2[j] << endl;
        j++;
    }

    return 0;
}