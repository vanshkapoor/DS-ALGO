#include <iostream>
#include <deque>
#include <bits/stdc++.h>

using namespace std;

void printmax(int arr[], int k, int n)
{
    std::deque<int> dq;

    // ADD LARGEST OF FIRST K ELEMENTS IN DEQUEUE
    int i;
    for (i = 0; i < k; i++)
    {
        while (!dq.empty() && arr[dq.back()] <= arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for (; i < n; i++)
    {
        // PRINT THE QUEUE ELEMENT
        cout << arr[dq.front()] << " ";

        // CHECK WINDOW SIZE
        while ((!dq.empty()) && dq.front() <= i - k)
        {
            dq.pop_front();
        }

        while ((!dq.empty()) && arr[i] >= arr[dq.back()])
        {
            dq.pop_back();
        }

        dq.push_back(i);
    }
    cout << arr[dq.front()];
}

int main()
{
    int arr[] = {1, 2, 3, 1, 4, 5, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    printmax(arr, k, n);

    return 0;
}