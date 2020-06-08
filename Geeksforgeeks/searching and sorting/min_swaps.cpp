// Minimum number of swaps required to sort an array

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {1, 3, 2, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    pair<int, int> arrp[n];

    for (int i = 0; i < n; i++)
    {
        arrp[i].first = arr[i];
        arrp[i].second = i;
    }

    int count = 0;
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++)
    {
        if (visited || arrp[i].first == i)
        {
            continue;
        }

        int cycle_size = 0;
        int j = i;

        while (!visited[j])
        {
            visited[j] = 1;
            j = arrp[j].second;
            cycle_size++;
        }

        if (cycle_size > 0)
        {
            count += cycle_size - 1;
        }
    }

    return 0;
}