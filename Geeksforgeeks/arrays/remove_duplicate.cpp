// Remove duplicate elements from sorted Array

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/*You are required to complete this function */

int remove_duplicate(int[], int);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }

        int n = remove_duplicate(a, sizeof(a) / sizeof(a[0]));

        for (int i = 0; i < N; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}
// } Driver Code Ends

/*You are required to complete this function */
int remove_duplicate(int A[], int N)
{
    //Your code here
    int j = 0;
    for (int i = 0; i < N - 1; i++)
    {
        if (A[i + 1] != A[i])
        {
            A[j] = A[i];
            j++;
        }
    }
    A[j] = A[N - 1];
    return j + 1;
}