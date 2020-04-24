#include<iostream>
#include<climits>

using namespace std;

int findminvertex(bool visited[],int weight[],int n)
{

}


int prims(int **edges, int n)
{
    int *parent =  new int[n];
    int *weight =  new int[n];
    bool *visited =  new bool[n];

    for(int i=0;i<n;i++)
    {
        visited[i] = false;
        weight[i] = INT8_MAX;
    }
    parent[0] = -1;
    weight[0] = 0;

    for(int i=0;i<v;i++)
    {
        int minVertex = findminvertex(visited,weight,n);
    }
}



int main()
{
    int n,e;  //n=vertices, e=edges

    // create adjacency matrix
    int **edges = new int*[n];
    for(int i=0;i<n;i++)
    {
        edges[i] = new int[n];
        for(int j=0;j<n;j++)
        {
            edges[i][j] = 0;
        }
    }

    // add edges  
    for(int i=0;i<e;i++)
    {
        int f,s,weight;
        cout<<"f =";
        cin>>f;
        cout<<"s =";
        cin>>s;
        cout<<"weight =";
        cin>>weight;
        edges[f][s] = weight;
        edges[s][f] = weight;
    }

    prims( edges, n);

    // delete
    for(int i=0;i<n;i++)
    {
        delete [] edges[i];
    }
    delete [] edges; 


    return 0;
}