// Partition a set into two subsets such that the difference of subset sums is minimum
#include <iostream>
using namespace std;

int partition(int arr[], int n, int csum, int total)
{
    if (n == 0)
    {
        return abs((total - csum) - csum);
    }

    return min(partition(arr, n - 1, csum + arr[n], total), partition(arr, n - 1, csum, total));
}

int main()
{
    int arr[] = {3, 1, 4, 2, 2, 1};
    int i = 0;
    int total = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < n; i++)
    {
        total += arr[i];
    }
    int csum = 0;
    cout << partition(arr, n, csum, total);

    return 0;
}