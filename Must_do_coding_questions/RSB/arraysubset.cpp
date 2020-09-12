// 2 PARTS :-
// PRINT SUBSETS OF VECTOR AND ARRAY

#include <iostream>
#include <vector>

using namespace std;

void print(int *arr)
{
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void subset(int *arr, int *sub, int i, int n)
{
    // cout << "i = " << i << endl;
    if (i == n)
    {
        // cout << "i = " << i << "n = " << n << endl;

        // cout << sizeof(sub) / sizeof(sub[0]) << endl;
        // cout << sub.length();
        print(sub);
        return;
    }
    sub[i] = -1;
    subset(arr, sub, i + 1, n);
    sub[i] = arr[i];
    subset(arr, sub, i + 1, n);
}

void printvector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}

void vsubset(vector<int> arr, vector<int> sub, int i, int n)
{
    if (i == n)
    {
        printvector(sub);
        return;
    }

    vsubset(arr, sub, i + 1, n);
    sub.push_back(arr[i]);
    vsubset(arr, sub, i + 1, n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sub[] = {};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "n" << n << endl;
    // subset(arr, sub, 0, n - 1);
    vector<int> arv{1, 2, 3, 4, 5};
    vector<int> subb;
    vsubset(arv, subb, 0, 5);

    return 0;
}