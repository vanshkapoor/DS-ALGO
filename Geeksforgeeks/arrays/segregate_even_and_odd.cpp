// All the even numbers should be present first, and then the odd numbers.

#include<iostream>

using namespace std;

int main()
{
    int arr[] = {1,9,5,3,2,6,7,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    int cnt = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]%2 == 0)
        {
            swap(arr[i],arr[cnt]);
            cnt++;
        }

    }

    return 0;
}