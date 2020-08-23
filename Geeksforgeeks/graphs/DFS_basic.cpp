#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void addEdge(vector<int> adj[], int i, int j)
{
    adj[i].push_back(j);
}

void print(vector<int> adj[], int V)
{
    for (int i = 0; i < V; i++)
    {
        for (auto x : adj[i])
        {
            cout << x;
        }
        cout << endl;
    }
}

int main()
{
    int V = 5;
    vector<int> v[V];
    addEdge(v, 0, 1);
    addEdge(v, 0, 2);
    addEdge(v, 1, 3);
    addEdge(v, 1, 4);
    addEdge(v, 3, 4);
    addEdge(v, 3, 5);
    addEdge(v, 4, 5);

    // print(v, V);

    return 0;
}