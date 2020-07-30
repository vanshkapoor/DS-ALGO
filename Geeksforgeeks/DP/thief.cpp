// Stickler the thief wants to loot money from a society having n houses in a single line. He is a weird person and follows a certain rule when looting the houses. According to the rule, he will never loot two consecutive houses. At the same time, he wants to maximize the amount he loots. The thief knows which house has what amount of money but is unable to come up with an optimal looting strategy. He asks for your help to find the maximum money he can get if he strictly follows the rule. Each house has a[i] amount of money present in it.

#include <iostream>

using namespace std;

int thiefsum(int arr[], int i, int sum, int n)
{
    if (i >= n)
    {
        return sum;
    }
    return max(thiefsum(arr, i + 2, sum + arr[i], n), thiefsum(arr, i + 1, sum, n));
}

// USING DP
int thiefsumDP(int arr[], int n)
{
    // int *dp = new int[];
    int dp[n];

    dp[0] = arr[0];
    dp[1] = max(arr[1], arr[0]);

    for (int i = 2; i < n; i++)
    {
        dp[i] = max(arr[i] + dp[i - 2], dp[i - 1]);
    }
    return dp[n - 1];
}

int main()
{

    int arr[] = {5, 5, 10, 100, 10, 5};
    int n = 6;

    cout << thiefsum(arr, 0, 0, n);

    return 0;
}