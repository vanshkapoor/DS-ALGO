#include <iostream>
using namespace std;

bool subset(int arr[], int n, int sum)
{
    if (sum == 0)
    {
        return true;
    }

    if (n == 0 && sum != 0)
    {
        return false;
    }

    if (arr[n] > sum)
    {
        subset(arr, n - 1, sum);
    }

    return subset(arr, n - 1, sum) || subset(arr, n - 1, sum - arr[n]);
}

int main()
{
    int arr[] = {1, 3, 2, 5, 4, 7, 9};

    int sum = 4;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << subset(arr, n - 1, sum);

    return 0;
}