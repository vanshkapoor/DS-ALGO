#include<iostream>

using namespace std;

void heapify(int arr[],int i,int n)
{
    int largest = i;
    int l = 2*i;
    int r = 2*i + 1;

    if(l<n && arr[l] > arr[largest])
    {
        largest = l;
    }

    if(r<n && arr[r] > arr[largest])
    {
        largest = r;
    }

    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,largest,n);
    }
}

void heapsort(int arr[],int n)
{
    for(int i=(n/2)-1;i>=0;i--)
    {
        heapify(arr,i,n);
    }

    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,0,i);
    }

}


int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapsort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}