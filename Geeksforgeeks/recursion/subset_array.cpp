#include <iostream>
#include <vector>

using namespace std;

void subset_util(int arr[], vector<int>& v, int n, int i, vector<vector<int> >& res)
{
    res.push_back(v);

    for (int j = i; j < n; j++)
    {	
        v.push_back(arr[j]);
	cout<<v[0]<<endl;
        subset_util(arr, v, n, j + 1, res);
        v.pop_back();
    }
    return;
}

vector<vector<int> > subset(int arr[], int n)
{
    vector<int> v;
    vector<vector<int> > res;
    subset_util(arr, v, 0, n, res);
for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
            cout << endl;
        }
    }
    return res;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<vector<int> > v;
    v = subset(arr, n);
    cout<<n;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
            cout << endl;
        }
    }

    return 0;
}
