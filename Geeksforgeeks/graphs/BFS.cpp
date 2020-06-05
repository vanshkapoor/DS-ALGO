// GRAPHS USING ADJACENCY LIST


#include<iostream>
#include <list> 

using namespace std;

class GRAPHS{
    int v;
    list<int>*adj;

    public:
    GRAPHS(int v);
    void addEdge(int v, int w);
    void BFS(int v);
};

GRAPHS::GRAPHS(int v)
{
    this->v = v;
    adj = new list<int>[v];
}

GRAPHS::addEdge(int v, int w)
{
    list[v].push_back(w);
}

GRAPHS::BFS(int v)
{
    bool *visited = new bool[];
    for(int i=0;i<v;i++)
    {
        visited[i] = false;
    }
    list<int>queue;
    queue.push_back(v);
    list<int>::iterator i;

    while(!queue.empty())
    {
        v = queue_front();
        cout<<v<<endl;
        queue.pop_front();



        for(i = adj[v].begin(); i != adj[v].end(); i++)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}


int main()
{
    return 0;
}