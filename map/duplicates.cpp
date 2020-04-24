#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<int ,bool>map;
    int arr[]={1,2,5,3,3,5,7,8,9};
    for(int i=0;i<9;i++)
    {
        map[arr[i]] +=1;
    }

    int c=0;
    int arr2[9];
    for(auto i : map)
    {
        arr2[c] = i.first;
        c++;
        cout<<i.first<<"-";
    }
    cout<<endl;
    for(int i=0;i<9;i++)
    {
        cout<<arr2[i]<<" ";
    }



    return 0;
}