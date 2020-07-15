// 0-1-2
// 1-3-4
// 2-5
// 3-/(null)
// 4-5

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>

using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}

void printEdge(vector<int> adj[], int V)
{
    for (int i = 0; i < V; i++)
    {
        cout << "For head : " << i << endl;
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << "->" << adj[i][j];
        }
        cout << endl;
    }
}

void BFS(vector<int> adj[], int v)
{
    bool visited[v + 3];
    for (int i = 0; i < v + 3; i++)
    {
        visited[i] = false;
    }

    queue<int> q;
    visited[0] = true;
    q.push(0);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int i = 0; i < adj[node].size(); i++)
        {
            if (visited[adj[node][i]] == false)
            {
                visited[adj[node][i]] = true;
                q.push(adj[node][i]);
            }
            // cout << adj[node][i] << " ";
        }
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
    addEdge(v, 2, 5);
    addEdge(v, 3, 5);
    addEdge(v, 4, 5);
    addEdge(v, 5, 1);

    // cout << v[0].size() << "FOR 0" << endl;
    // cout << v[0][0] << "->" << v[0][1] << "->" << endl;
    // cout << v[1].size() << "FOR 1" << endl;
    // cout << v[1][0] << "->" << v[1][1] << "->" << endl;
    // cout << v[2].size() << "FOR 2" << endl;
    // cout << v[2][0] << endl;
    // cout << v[4].size() << "FOR 4" << endl;
    // cout << v[4][0];

    // printEdge(v, V);
    BFS(v, V);

    return 0;
}