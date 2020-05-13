#include <iostream>
#include <unordered_map>
#define INT_MIN = -2147483648
using namespace std;

int main()
{
    string A = "dadbc";
    int i = 0;
    int n = A.size();
    unordered_map<char, int> umap;
    int ctr = 0;
    int max = -25675;
    // cout << n;
    if (n == 1 || n == 0)
    {
        cout << n;
    }

    for (i = 0; i <= n; i++)
    {
        if (umap.find(A[i]) == umap.end())
        {
            umap[A[i]] = i;
            ctr++;
        }
        else
        {
            if (ctr > max)
            {
                i = umap[A[i]] + 1;
                max = ctr;
                umap.clear();
            }
            ctr = 0;
        }
    }
    if (ctr > max)
    {
        max = ctr;
    }
    cout << max;
    return 0;
}