#include <iostream>
#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> pq; //MAX HEAP  by default
    pq.push(1);
    pq.push(12);
    pq.push(9);
    pq.push(11);
    pq.push(15);

    while (!pq.empty())
    {
        cout << pq.top() << "-";
        pq.pop();
    }

    // MIN HEAP
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(1);
    minpq.push(12);
    minpq.push(9);
    minpq.push(11);
    minpq.push(15);

    while (!minpq.empty())
    {
        cout << minpq.top() << "-";
        minpq.pop();
    }

    return 0;
}