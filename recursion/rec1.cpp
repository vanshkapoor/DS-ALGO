#include<iostream>

using namespace std;

bool sorted(int arr[], int m)
{
    if(m <= 0){
        return true;
    }
    if(arr[0] > arr[1])
    {
        return false;
    }else{
        arr++;
        m--;
        sorted(arr,m);
    }
}


int main()
{
    int arr[]={1,2,3,4,5,7,8,9};
    int m = sizeof(arr)/sizeof(arr[0]);

    bool m1 = sorted(arr,m);
    cout<<m1;

    return 0;
}