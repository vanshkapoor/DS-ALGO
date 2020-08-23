// #include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);

    for (auto x : v)
    {
        cout << x;
    }
    cout << endl;

    int arr[] = {1, 5, 3, 2, 4};

    for (auto x : arr)
    {
        cout << x;
    }

    return 0;
}
