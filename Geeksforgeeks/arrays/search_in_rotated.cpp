#include<iostream>

using namespace std;

int main()
{
    int arr[]={4,5,6,7,8,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int item = 8; //item to find

    int beg = 0;
    int end = n-1;
    int mid = 0;

    while(beg<=end)
    {
        mid = (beg+end)/2;
        if(arr[mid] == item)
        {
            cout<<mid+1;
            break;
        }

        if(arr[mid]>=arr[beg])
        {
            if(item >= arr[beg] && item <= arr[mid]){
                end = mid-1;
            }else{
                beg = mid+1;
            }
        }else if(arr[mid] < arr[beg])
        {
            if(item>=arr[mid] && item <=arr[end])
            {
                beg = mid+1;
            }else{
                end = mid-1;
            }
        }

    }



    return 0;
}