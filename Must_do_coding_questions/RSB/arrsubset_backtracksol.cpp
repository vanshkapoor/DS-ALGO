#include <iostream>
#include <vector>

using namespace std;

void subsets(vector<int> arr, vector<vector<int>> &res, vector<int> sub, int i, int n)
{

    res.push_back(sub);

    for (int j = i; j < n; j++)
    {
        sub.push_back(arr[j]);
        subsets(arr, res, sub, j + 1, n);
        sub.pop_back();
    }
    return;
}

void subhelper(vector<int> arr, int n)
{
    if (n == 0)
    {
        cout << "empty";
        return;
    }
    vector<int> sub{};
    vector<vector<int>> res;
    subsets(arr, res, sub, 0, n);

    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    vector<int> arr{1, 2, 3, 4, 5};
    int n = arr.size();
    subhelper(arr, n);

    return 0;
}