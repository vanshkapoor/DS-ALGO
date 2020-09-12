// BACKTRACKING SOLUTION TO FIND ALL SUBSETS WITH GIVEN SUM WITH REPITIION OF ELEMENTS

#include <iostream>
#include <vector>

using namespace std;

void subset(vector<int> arr, vector<int> sub, vector<vector<int>> &res, int sum, int i, int n)
{
    if (sum < 0)
    {
        return;
    }
    else if (sum == 0)
    {
        res.push_back(sub);
        return;
    }

    for (int j = i; j < n; j++)
    {
        sub.push_back(arr[j]);
        subset(arr, sub, res, sum - arr[j], j, n);
        sub.pop_back();
    }
}

void subsethelper(vector<int> arr, int sum, int n)
{
    vector<int> sub{};
    vector<vector<int>> res;

    subset(arr, sub, res, sum, 0, n);

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
    vector<int> arr{1, 2, 4, 3, 2, 1};
    int sum = 5;
    int n = arr.size();

    subsethelper(arr, sum, n);

    return 0;
}