
#include<iostream>
#include<cmath>
#include<limits.h>

using namespace std;


void movetoend(int arr[],int n)
{
    int j=n-1;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]!=NULL)
        {
            arr[j] = arr[i];
            cout<< i <<" - "<<arr[i]<<"\n";
            if(i != j)
            {
                arr[i] = NULL;
            }

            j--;
            for(int k=0;k<n;k++)
            {
                cout<<arr[k];
            }
            cout<<endl;

        }

    }
}


int main()
{
    int arr[] = {4,NULL,1,NULL,NULL,2,NULL,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    movetoend(arr,size);
    return 0;
}