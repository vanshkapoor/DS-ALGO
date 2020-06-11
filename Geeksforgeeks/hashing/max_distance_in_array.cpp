// QUESTION : Given an array with repeated elements, the task is to find the maximum distance between two occurrences of an element.

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int maxDistance(int arr[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << maxDistance(arr, n) << endl;
    }
    return 0;
} // } Driver Code Ends

// your task is to complete this function
int maxDistance(int arr[], int n)
{
    //Code here
    // check for presence
    // if found:
    // get the value
    // check the difference
    // compare difference with max and update that
    // else
    // add in map
    unordered_map<int, int> umap;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (umap.find(arr[i]) == umap.end())
        {
            umap[arr[i]] = i;
        }
        else
        {
            int i1 = umap[arr[i]];
            if (i - i1 > max)
            {
                max = i - i1;
            }
        }
    }
    return max;
}