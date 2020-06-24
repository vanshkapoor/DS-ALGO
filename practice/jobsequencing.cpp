#include<iostream>

using namespace std;

//sorted one
void jobsq()
{
    int j[] = {1,2,3,4,5};
    int p[] = {20,15,10,5,1};
    int d[] = {2,2,1,3,3};
    int n = sizeof(j)/sizeof(j[0]);
    int m;
    int i=0;
    int max = 0;
    while(i!=n)
    {
        if(d[i] > max)
        {
            max = d[i];
        }
        i++;
    }
    int arr[5]={0,0,0,0,0};
    for(i=0;i<n;i++)
    {
        int c=i;
        int mn = d[i] -1;
        while(arr[c]!=0 && c >=0)
        {
            arr[c] = j[i];
            c--;
        }
    }

    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }
}


int main()
{    
    jobsq();
    return 0;
}