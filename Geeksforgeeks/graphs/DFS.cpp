// GRAPHS USING ADJACENCY LIST


#include<iostream>
// #include<vector>
#include <list> 

using namespace std;

class graphs{

    int v;
    // vector<int>*v;
    list<int>*adj;
    void dfsUtil(bool visited[], int v);

    public:
    graphs(int v);
    void dfs(int v);
    void addEdge(int v,int w);
};

graphs::graphs(int v)
{
    this->v = v;
    adj = new list<int>[v];
}

void graphs::addEdge(int v,int w)
{
    adj[v].push_back(w);
}

void graphs::dfsUtil(bool visited[], int v)
{
    visited[v] = true;
    cout<<v<<endl;

    list<int>::iterator i;
    for(i = adj[v].begin(); i!=adj[v].end(); ++i)
    {
        if(!visited[*i])
        {
            dfsUtil(visited,*i);
        }
    }
}

void graphs::dfs(int v)
{
    bool *visited = new bool[v];
    for(int i=0;i<v;i++)
    {
        visited[i] = false;
    }

    dfsUtil(visited, v);
}


int main()
{
    graphs g(4);
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 

    g.dfs(2);

    return 0;
}