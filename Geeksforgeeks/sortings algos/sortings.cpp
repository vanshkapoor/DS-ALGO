// all sortings

#include<iostream>
using namespace std;

void binarysearch(int arr[],int n,int item)
{
    int beg = 0;
    int end = n;
    int mid = 0;

    while(beg < end){
        mid = (beg + end)/2;
        cout<<mid<<endl;
        if(arr[mid] == item)
        {
            cout<<"item found at = "<<mid;
            cout<<endl;
            break;
        }else if(item > arr[mid]){
            beg = mid + 1;
        }else{
            end = mid - 1;
        }
    }
}

void selectionsort(int ar[],int n)
{
    int minIndex;
    int temp;
    for(int i = 0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {

            minIndex = i;
            // cout<<"i = "<<i<<"minindex = "<<minIndex<<endl;

            if(ar[minIndex] > ar[j])
            {
                minIndex = j;
            }

            temp   = ar[i];
            ar[i] = ar[minIndex];
            ar[minIndex] = temp;
            
        }   
    // for(int k = 0; k<n;k++)
    // {
    //     cout<<ar[k];
    // }
    // cout<<endl;   
    }

    for(int k = 0; k<n;k++)
    {
        cout<<ar[k];
    }
    cout<<endl;
}


void bubblesort(int arr[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j+1] < arr[j])
            {
                temp = arr[j+1];            
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int k = 0; k<n;k++)
    {
        cout<<arr[k];
    }
    cout<<endl;
}


void insertionsort(int arr[],int n)
{
    int key,j;
    for(int i=1;i<=n;i++)
    {
        key = arr[i];
        j = i-1;

        while(j > 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j= j-1;
        }        
    }

    for(int k = 0; k<n;k++)
    {
        cout<<arr[k];
    }
    cout<<endl;

}

void merge(int arr[],int l[],int r[],int nl,int nr)
{
    int i=0,j=0,k=0;
    while(i < nl && j < nr)
    {
        if(l[i] < r[j]){
            arr[k] = l[i];
            i++;
            k++;
        }else{
            arr[k] = r[j];
            j++;
            k++;
        }
    }

    while(i < nl)
    {
        arr[k] = l[i];
        k++;
        i++;
    }

    while(j < nr)
    {
        arr[k] = r[j];
        k++;
        j++;
    }
    for(int k = 0; k<8;k++)
    {
        cout<<arr[k];
    }
    cout<<endl;
}
int mergesort(int arr[],int n)
{
    if(n < 2){
        return 0;
    }
    int mid = n/2;
    int l[1000],r[1000];

    for(int i = 0;i < mid;i++)
    {
        l[i] = arr[i];
    }

    for(int j=mid;j<n;j++)
    {
        r[j-mid] = arr[j];
    }

    mergesort(l,mid);
    mergesort(r,n-mid);
    merge(arr,l,r,mid,n-mid);
}




int partition(int arr[], int start, int end)
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
void quicksort(int arr[], int start, int end)
{
  
  if(start < end)
  {
   int pindex;
   pindex = partition(arr, start, end);
       for(int k = 0; k<=8;k++)
    {
        cout<<arr[k];
    }
    cout<<endl;
   quicksort(arr, start, pindex - 1);
   quicksort(arr, pindex + 1, end);
  }
}


int main()
{
    int arr[] = {1,2,3,5,8,9,10,11};
    int ar[] = {1,5,3,4,8,7,2,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int item = 8;
    
    cout<<"binary search :"<<endl;
    binarysearch(arr,n,item);

    cout<<"selection sor :"<<endl;
    // selectionsort(ar,n);

    cout<<"bubble sort :"<<endl;
    // bubblesort(ar,n);

    cout<<"insertion sort"<<endl;
    // insertionsort(ar,n);

    cout<<"quick sort"<<endl;
    quicksort(ar,0,n);

    cout<<"merge sort"<<endl;
    // mergesort(ar,n);
    // for(int k = 0; k<n;k++)
    // {
    //     cout<<ar[k];
    // }
    // cout<<endl;
    
    cout<<"heap sort"<<endl;

    return 0;
    cout<<endl;
}