//TO FIND THE FIRST INDEX OF A NUMBER IN A ARRAY
//eg. [5,5,6,5,6] => for 5 it is 0 => for 6 it is 2
#include<iostream>

using namespace std;

int firstindex(int arr[],int n,int size)
{
  if(size == 0)
  {
    return -1;
  }
  
  if(arr[0] == n)
  {
    return 0;
  }

   int ans=firstindex(arr+1,n,size-1);
   cout<<"->"<<ans<<"\n";
   if(ans == -1)
   {
   return ans;
   }else{
   return ans+1;
   }

}



int main()
{
int arr[]={1,1,2,3,1,2};
int n=6;
int size = sizeof(arr)/sizeof(arr[0]);

int m = firstindex(arr,n,size);

cout<<m;

return 0;
}
