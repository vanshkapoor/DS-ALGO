#include<iostream>

using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void print(vector<int> adj[], int v)
{
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<adj.size();j++)
        {
            cout<<adj[j];
        }
    }
}

int main()
{
    int v=5;
    vector<int> adj[v];
    addEdge(adj,0,1);
}