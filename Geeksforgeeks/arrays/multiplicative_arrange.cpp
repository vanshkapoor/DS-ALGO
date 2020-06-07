// Replace every array element by multiplication of previous and next
#include<iostream>

using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int curr;
    int n = sizeof(arr)/sizeof(arr[0]);

    int prev = arr[0];
    arr[0] = prev* arr[1];


    for(int i=1;i<n-1;i++)
    {
        curr = arr[i];
        arr[i] = prev * arr[i+1];
        prev = curr;
    }
    arr[n-1] = arr[n-1] * prev;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}