
#include<iostream>

using namespace std;


int main()
{
    int arr[] = {1,3,5,2,9,6,10,4,11,12,14,15 };
    int m = sizeof(arr)/sizeof(arr[0]);
    int first = 0;
    int second = 0;
    for(int i=0;i<m;i++)
    {
        if(arr[i] > arr[first])
        {
            second = first;
            first = i;
        }
        else if(arr[i] > arr[second] && arr[i] != arr[first]){
            second = i;
        }
    }

    cout<<"first : "<<first<<"second : "<<second<<endl;


    return 0;
}