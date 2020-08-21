#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main()
{
    // unordered_map<string, int> map;
    // map["a"] = 1;
    // map["b"] = 4;
    // map["c"] = 2;

    // unordered_map<string, int>::iterator it = map.begin();
    // while (it != map.end())
    // {
    //     cout << "key = " << it->first << "value = " << it->second;
    //     it++;

    //     // map.erase(it);
    //     // map.erase(it,it+4); 0,1,2,3,4 deleted
    // }

    // WAY 2
    unordered_map<int, int> umap;

    int arr[] = {1, 2, 3, 2, 3, 4, 5, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (umap.find(arr[i]) == umap.end())
        {
            umap[arr[i]] = 1;
        }
    }
    for (auto i : umap)
    {
        cout << i.first << " - " << i.second << endl;
    }

    return 0;
}