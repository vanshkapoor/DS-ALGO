#include<iostream>

using namespace std;

//to sort the array
int ar[] = {9,5,7,4,2,41,1};
void merge(int arr[], int l[], int nl, int r[], int nr)
{
  int i=0,j=0,k=0;
  while(i<nl && j<nr)
  {
    if(l[i] < r[j])
    { 
      arr[k] = l[i];
      k++;
      i++;
    }else{
      arr[k] = r[j];
      k++;
      j++;
    }
  }

  while(i < nl)
  {
    arr[k++] = l[i++];
  }    
  while(j < nr)
  {
    arr[k++] = r[j++];
  }
  for(int q=0;q<7;q++)
  {
    cout<<arr[q];
  }
  cout<<endl;
}


//to break the array in halfs
int mergesort(int arr[], int n)
{
  if(n < 2)	
    return 0;

  int mid = n/2;
  int l[1000], r[1000];

  for(int i=0; i< mid; i++)
    l[i] = arr[i];

  for(int j=mid; j< n; j++)
    r[j-mid] = arr[j];

//call left
  mergesort(l, mid);
//call right
  mergesort(r, n-mid);
//merging left and right
  merge(arr,l,mid,r,n-mid);
}


int main()
{

int size = sizeof(ar)/sizeof(ar[0]);

mergesort(ar, size);
for(int i=0;i<size;i++)
  cout<<ar[i]<<" ";


return 0;
}
