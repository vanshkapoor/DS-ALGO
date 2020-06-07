#include<iostream>

using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};

    int max_index = 7;
    int min_index = 0;
    int max_element = arr[max_index]+1;

    for(int i=0;i<=7;i++)
    {
        if(i%2 == 0)
        {
            arr[i] += arr[max_index]%max_element*max_element;
            max_index--;
        }else{
            arr[i] += arr[min_index]%max_element*max_element;
            min_index++;
        }
    }

    for(int i=0;i<=7;i++)
    {
        cout<<arr[i]/max_element<<" ";
    }

    return 0;
}
