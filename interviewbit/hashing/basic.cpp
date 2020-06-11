#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    std::unordered_map<int, int> amap;

    int arr[] = {10, 12, 23, 24, 25};

    for (int i = 0; i < 5; i++)
    {
        amap[arr[i]]++;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << amap[arr[i]];
    }
    cout << endl;
    cout << amap[11];

    for (auto x : amap)
    {
        cout << x.first << " : " << x.second << endl;
    }

    // (amap.find(12) ==1)? cout<<"found":cout<<"not found";
    // cout << amap.end();
    return 0;
}