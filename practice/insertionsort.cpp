#include<iostream>

using namespace std;

void insertion_sort(int arr[], int n)
{
int key,j;
for(int i=1;i<n;i++)
{
  key = arr[i];
  j=i-1;
  while(j>=0 && arr[j] > key)
  {
    arr[j + 1] = arr[j];
    j=j-1;
  }
  
  arr[j + 1] = key;  
}

}


int main()
{
int arr[]={4,7,42,1,99,6,71};
int size = sizeof(arr)/sizeof(arr[0]);

insertion_sort(arr, size);

for(int i=0; i< size; i++)
{
  cout<<arr[i]<<" ";
}

return 0;
}
