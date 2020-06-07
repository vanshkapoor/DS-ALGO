// Move all zeroes to end of array

#include<iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,3,0,3,0,4,0,0,9,8,0,0,9,0};
    int count = 0;
    int n = sizeof(arr)/sizeof(arr[0]);


    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            cout<<
            arr[count++] = arr[i];
        }
    }

    while(count<n-1)
    {
        arr[count++] = 0;
    }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    return 0;
}