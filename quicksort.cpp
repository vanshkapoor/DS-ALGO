#include<iostream>

using namespace std;



//to return pivot
int partition(int *arr, int start, int end)
{
int pivot = arr[end];
int pindex = start;
int temp=0;
for(int i=start; i< end; i++)
{
  if(arr[i]  <= pivot)
  {
     temp        = arr[i];
     arr[i]      = arr[pindex];
     arr[pindex] = temp;
     pindex++;
  }
}
temp        = arr[pindex];
arr[pindex] = arr[end];
arr[end]    = temp;

return pindex;
}


//to break array
void quicksort(int *arr, int start, int end)
{
  
  if(start < end)
  {
   int pindex;
   pindex = partition(arr, start, end);
   quicksort(arr, start, pindex - 1);
   quicksort(arr, pindex + 1, end);
  }
}


int main()
{
int ar[] = {9,4,7,2,1,65,5,3};
int size = sizeof(ar)/sizeof(ar[0]);

quicksort(ar, 0, size);

for(int i=0;i<size;i++)
{
  cout<<ar[i]<<" ";
}


return 0;
}

