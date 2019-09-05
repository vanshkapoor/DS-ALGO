#include<iostream>

using namespace std;

int main()
{
int arr[] = {16,17,4,3,5,2};
int n = sizeof(arr)/sizeof(arr[0]);

for(int i = 0; i < n; i++)
{	
//  cout<<arr[i];	
	int j;
  for(j = i+1; j < n; j++)
  {
     if(arr[j] > arr[i])	
     {
	cout<<"no for :"<<arr[i]<<"\n";
	break;
 	
     }
  }

     if(j == n)
	{
   	  cout<<"yes for : "<<arr[i]<<"\n";	
	}
}

return 0;
}
