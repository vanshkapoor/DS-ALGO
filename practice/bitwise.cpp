#include<iostream>

using namespace std;

int main()
{
    int i = 3;

    int arr[]={1,1,2,2,4,5,5};

    int res = 0;
    // for(int j=0;j<10;j++)
    // {
    //     res ^=i;
    //     cout<<res<<endl;
    // }
    res=0;

    for(int j=0;j<7;j++)
    {
        res ^=arr[j];
        cout<<res<<endl;
    }

    return 0;
}