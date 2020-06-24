//TO FIND THE LAST INDEX OF A NUMBER IN A ARRAY
//eg. [5,5,6,5,6] => for 5 it is 3 => for 6 it is 4
#include<iostream>

using namespace std;

int lastindex(int arr[],int n,int size)
{
 if(size == 0)
 {
  return -1;
 }

 int ans = lastindex(arr+1,n,size-1);
 if(ans == -1)
 {
  if(arr[0] == n)
  {
    return 0;
  }else{
    return -1;
  }
 }else{
  return ans+1;
 } 


}


int main()
{
int arr[]={1,1,2,3,1,2};
int n=5;
int size = sizeof(arr)/sizeof(arr[0]);

int m = lastindex(arr,n,size);

cout<<m;


return 0;
}
