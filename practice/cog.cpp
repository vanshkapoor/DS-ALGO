#include <iostream>

using namespace std;

int main()
{
    int m;
    cin >> m;
    int arr[9];
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }
    int temparr[9];
    int new_arr[9];

    while (m > 0)
    {
        for (int i = 0; i < 8; i++)
        {
            if (i == 0)
            {
                if (arr[i + 1] == 0)
                {
                    new_arr[i] = 0;
                }
                else
                {
                    new_arr[i] = arr[i];
                }
            }
            else if (i == 7)
            {
                if (arr[i - 1] == 0)
                {
                    new_arr[i] = 0;
                }
                else
                {
                    new_arr[i] = arr[i];
                }
            }
            else
            {
                if (arr[i + 1] == arr[i - 1])
                {
                    new_arr[i] = 0;
                }
                else
                {
                    new_arr[i] = arr[i];
                }
            }
        }

        for (int i = 0; i < 8; i++)
        {
            temparr[i] = arr[i];
            arr[i] = new_arr[i];
            new_arr[i] = temparr[i];
        }
        // swap(arr, new_arr);

        m--;
    }

    return 0;
}