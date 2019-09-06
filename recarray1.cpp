//TO  CHECK IF ARRAY IS SORTED USING RECURSSION

#include<iostream>

using namespace std;

int sort(int arr[],int size)
{
//base
if(size == 0)
{
  return 1;
}

if(arr[0]>arr[1])
{
  return 0;
}else{
  sort(arr+1,size-1);
}
}




int main()
{
int arr[]={1,2,3,4,5,0};
int size = sizeof(arr)/sizeof(arr[0]);
int check = sort(arr,size);
if(check == 0)
{
cout<<"not";
}else{
cout<<"yes";
}

return 0;
}
