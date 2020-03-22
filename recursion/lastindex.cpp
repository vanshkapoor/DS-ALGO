#include<iostream>

using namespace std;

int lastIndex(int arr[],int m,int item)
{
    if(m == 0)
    {
        return -1;
    }
    int ans = lastIndex(arr+1,m-1,item);
    if(ans != -1)
    {
        return ans + 1;
    }else if(arr[0] == item)
    {
        return 0;
    }else{
        return -1;
    }    
}


int main()
{
    int arr[]={9,2,3,4,3,7,8,9};
    int m = sizeof(arr)/sizeof(arr[0]);

    return 0;
}