#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void pairsort(int *a, int *b, int n)
{
    pair<int, int> p[n];

    for (int i = 0; i < n; i++)
    {
        p[i].first = a[i];
        p[i].second = b[i];
    }

    sort(p, p + n);

    for (int i = 0; i < n; i++)
    {
        cout << p[i].first << "-" << p[i].second << endl;
    }
}

int main()
{
    int arr1[] = {5, 4, 2, 1, 3};
    int arr2[] = {100, 102, 103, 99, 21};
    int n = 5;

    pairsort(arr1, arr2, n);

    return 0;
}