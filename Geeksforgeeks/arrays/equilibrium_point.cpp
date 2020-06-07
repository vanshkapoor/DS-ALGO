#include<iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6};

    int n = sizeof(arr)/sizeof(arr[0]);

    // BASE CASE : n=1 : has equi point
    // n=2 doesnt have equi point
    // 1,2,3,4,5,6
    // 1,3,6,10,15,21
    int *narr = new int[n];
    narr[0] = arr[0];
    for(int i=1;i<n;i++)
    {
        narr[i] = narr[i-1] + arr[i] ;
        // cout<<i<<"-"<<narr[i]<<endl;
    }
    int total = narr[n-1];
    // cout<<total;
    for(int i=1;i<n-1;i++)
    {
        int L_sum = narr[i] - arr[i];
        int R_sum = total - narr[i];
        cout<<L_sum<<"-"<<R_sum<<endl;
    }

    return 0;
}