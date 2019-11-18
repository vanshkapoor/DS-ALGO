#include<iostream>

using namespace std;

void maxsum(int arr[],int n)
{
    int sum;
    int maxs=0;
    int j,i;

    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j=j+2)
        {
            sum = sum + arr[j];
            cout<<sum;
            if(j > n)
            break;
        }
        if(sum>maxs)
        {
            maxs=sum;
            cout<<i<<" - "<<maxs<<endl;
        }
    }
}


int main()
{
    int arr[]={5,  5, 10, 40, 50, 35};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxsum(arr,n);
    return 0;
}