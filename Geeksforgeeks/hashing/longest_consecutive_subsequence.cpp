// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

int findLongestConseqSubseq(int[], int);

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        // input array elements
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << findLongestConseqSubseq(a, n) << endl;
    }
    return 0;
} // } Driver Code Ends

// function to find longest consecutive subsequence
// n : size of array
// arr[] : input array
int findLongestConseqSubseq(int arr[], int n)
{
    //Your code here
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i] - 1) == s.end())
        {
            int j = arr[i];
            while (s.find(j) != s.end())
            {
                j++;
            }
            ans = max(j - arr[i], ans);
        }
    }
    return ans;
}