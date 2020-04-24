#include<iostream>

using namespace std;

class edge{
    public:
    int source;
    int destination;
    int weight;

    // edge(int s,int d,int w)
    // {
    //     source = s;
    //     destination = d;
    //     weight = w;
    // }

};

bool compare(edge e1, edge e2)
{
    return e1.weight < e2.weight;
}

int findParent(int ele, int parent[])
{
    int i = ele;
    if(parent[i] == i)
    {
        return i;
    }else{
        return findParent(parent[i],parent);
    }   

}

int main()
{
    edge obj[8];   //8 here is no of edges 
    edge new_obj[7];

    // create an input array
    for(int i=0;i<8;i++)
    {
        cout<<"enter source";
        cin>>obj[i].source;

        cout<<"enter destination";
        cin>>obj[i].destination;

        cout<<"enter weight";
        cin>>obj[i].weight;
    }




    //sort an input array based on weights
    sort(obj,obj+8, compare);  //can use selection sort here

    
    // create a parent array for MST
    int parent[8];
    for(int i=0;i<8;i++)
    {
        parent[i] = i;
    }

    int count = 0;
    int i=0;
    while(count<7)
    {
        int s = obj[i].source;
        int d = obj[i].destination;




        if(findParent(s,parent) == findParent(d,parent))
        {
            i++;
            continue;
        }else{
            new_obj[count] = obj[i];
            
            // update the parent
            parent[s] = d;

            count++;
            i++;
            
        }
    }

    // print
    for(i=0;i<7;i++)
    {
        if(new_obj[i].source < new_obj[i].destination)
        {
            cout<<new_obj[i].source<<" "<<new_obj[i].destination<<" "<<new_obj[i].weight;
        }else{
            cout<<new_obj[i].destination<<" "<<new_obj[i].source<<" "<<new_obj[i].weight;
        }
    }


    return 0;
}