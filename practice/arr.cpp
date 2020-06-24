#include<iostream>

using namespace std;


int main()
{
    int arr[3]={1,2,3};

    cout<<"a = "<<arr<<endl;
    int *p = &arr[0];
    cout<<"p = "<<p<<endl;
    // arr = arr + 4;   //ERROR: as cant increment arr
    // cout<<"a++ = "<<arr<<endl;
    p++;
    cout<<"p++ = "<<p<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<p[i];
    }

    return 0;
}