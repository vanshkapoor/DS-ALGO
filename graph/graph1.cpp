#include<iostream>

using namespace std;

void print(int **edges, int n, int sv, bool *visited)
{
    cout<<sv;
    visited[sv] = true;
    for(int i=0;i<n;i++)
    {
        if(i == sv)
        {
            continue;
        }
        if(edges[sv][i] == 1)
        { 
            if(visited[i])
            {
                continue;
            }

            print(edges, n, i, visited);   
        }
    }
}

void BFS(int **edges, int n)
{
    bool *visited = new bool[n];
    for(int i=0;i<n;i++)
    {
        visited[i] = false;
    }

    for(int i=0;i<n;i++)
    {
        if(!visited[i]){
            printBFS(edges, n, i);
        }
    }
}

static int q=0;
void printBFS(int **edges, int n,int sv)
{
    int *queue = new int[n];
    bool *visited = new bool[n];
    for(int i=0;i<n;i++)
    {
        visited[i] = 0;
    }
    queue[q] = sv;
    q++;
    visited[sv] = true;
    while(sizeof(queue) > 0)
    {
        int cv = queue[0]; // and remove this 0 -- it is better to use inbuilt queue here
        cout<<cv;

        for(int i=0;i<n;i++)
        {
            if(i == cv)
            {
                continue;
            }
            if(edges[cv][i] == 1 && !visited[i])
            {
                queue[q] = i;
                q++;
                visited[i] == true;
            }
        }
    }

}



int main()
{
    int n,e;  //n=nodes
    cin>>n>>e;


    // create
    int **edges = new int*[n];
    for(int i=0;i<n;i++)
    {
        edges[i] = new int[n];
        for(int j=0;j<n;j++)
        {
            edges[i][j] = 0;
        }   
    }
 
    // insert
    for(int i=0;i<e;i++)
    {
        int f,s;
        cout<<"f";
        cin>>f;
        cout<<"s";
        cin>>s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    } 
    bool *visited = new bool[n];
    for(int i=0;i<n;i++)
    {
        visited[i] = 0;
    }


    print(edges,n, 0, visited);


    return 0;
}