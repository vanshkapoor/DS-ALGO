//ARRAY -5 -Given an array A[] and a number x, check for pair in A[] with sum as x

#include<iostream>

using namespace std;

int main()
{
int arr[] = {1,2,3,4,5,6,7,8,9}; //sorted array
int x = 6;
int r = sizeof(arr)/sizeof(arr[0]);
int l = 0;
//int ar1[100];
//int i = 0;

while(l < r)
{
  if(arr[l] + arr[r] == x)
  {
 // ar1[i] = arr[l];
  //ar1[i++] = arr[r];
//  i++;
  cout<<arr[l]<<" "<<arr[r]<<"\n";
  l++;
  }else if(arr[l] + arr[r] < x)
  {
   l++;
  }else
  {
   r--;
  }  		
}

//int m = sizeof(ar1)/sizeof(ar1[0]);
//for(int i = 0;i < m; i++)
//{
  //cout<<ar1[i]<<"\n";
//}



return 0;
}
