// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> countDistinct(int[], int, int);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> result = countDistinct(a, n, k);
        for (int i : result)
            cout << i << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends

vector<int> countDistinct(int A[], int n, int k)
{

    unordered_set<int> s;
    vector<int> v;

    for (int i = 0; i < n - k; i++)
    {
        int m = k;
        for (int j = i; j < i + k; j++)
        {
            if (s.find(A[j]) != s.end())
            {
                m--;
            }
            else
            {
                s.insert(A[j]);
            }
        }
        v.push_back(m);
        s.clear();
    }

    return v;
}