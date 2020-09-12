#include <iostream>
#include <vector>

using namespace std;

void printvector(vector<int> sub)
{
    for (int i = 0; i < sub.size(); i++)
    {
        cout << sub[i] << " ";
    }
    cout << endl;
}

void subsetsum(vector<int> arr, int sum, int n, vector<int> sub)
{
    if (sum == 0)
    {
        printvector(sub);
        cout << "True";
        return;
    }
    if (n == 0 && sum != 0)
    {
        return;
    }

    subsetsum(arr, sum, n - 1, sub);
    sub.push_back(arr[n]);
    subsetsum(arr, sum - arr[n], n - 1, sub);
}

int main()
{

    vector<int> arr{1, 3, 2, 4, 5, 7, 9};
    int n = arr.size();
    int sum = 10;

    vector<int> sub;
    subsetsum(arr, sum, n - 1, sub);

    return 0;
}