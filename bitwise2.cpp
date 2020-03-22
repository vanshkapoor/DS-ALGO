#include<iostream>

using namespace std;

int main()
{
    int arr[]={1,2,3,4,6};

    int res = 0;    
    res=0;

    for(int j=0;j<5;j++)
    {
        res ^=arr[j];
        cout<<res<<endl;
    }

    cout<<endl;
    int res2 = 0;
    for(int i=0;i<6;i++)
    {
        res2 ^= i;
        cout<<res<<endl;
    }

    return 0;
}