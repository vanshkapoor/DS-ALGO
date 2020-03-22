#include<iostream>

using namespace std;

static int i=0;

int firstIndex(int arr[], int m, int item)
{
    if(m == 0)
    {
        return -1;
    }

    if(arr[0] == item)
    {
        return i;
    }else{
        i++;
        arr++;
        m--;
        firstIndex(arr,m,item);
    }

}

int firstIndex2(int arr[], int m, int item, int j)
{
    if(m == 0)
    {
        return -1;
    }

    if(arr[0] == item)
    {
        return j;
    }else{
        j++;
        arr++;
        m--;
        firstIndex2(arr,m,item,j);
    }

}



int main()
{
    int arr[]={9,2,3,4,3,7,8,9};
    int m = sizeof(arr)/sizeof(arr[0]);

    int ans = firstIndex2(arr,m,3,0);
    cout<<ans;
    return 0;
}