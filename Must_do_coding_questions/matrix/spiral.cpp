// k= row index
// l= col index
// n= end col index
// m= end row index
#include <iostream>

using namespace std;

int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int k = 0, l = 0;
    int m = 4, n = 4;

    while (k < m && l < n)
    {
        /* code */
        for (int i = l; i < n; i++)
        {
            cout << arr[k][i] << " ";
        }
        k++;
        for (int i = k; i < m; i++)
        {
            cout << arr[i][n - 1] << " ";
        }
        n--;
        if (k < m)
        {
            for (int i = n - 1; i >= l; i--)
            {
                cout << arr[m - 1][i] << " ";
            }
            m--;
        }
        if (l > n)
        {
            for (int i = m - 1; i >= k; i--)
            {
                cout << arr[i][l] << " ";
            }
            l++;
        }
    }

    return 0;
}