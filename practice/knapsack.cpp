// abdul bari video

#include<iostream>
using namespace std;

int main()
{
    int  p[] ={0,1,2,5,6};
    int  wt[] ={0,2,3,4,5};
    int n=4;
    int capacity = 8;
    int k[5][9];
    for(int i=0;i<n;i++)
    {
        for(int w=0;w<capacity;w++)
        {
            if(w==0 || i==0)
            {
                k[i][w] = 0;
            }
            else if(w<wt[i])
            {
                k[i][w] = k[i-1][w];
            }else{
                // main logic
                
                k[i][w] = max(p[i] + k[i-1][w-wt[i]] , k[i-1][w]);
            }
        }
    }
    cout<<k[n][capacity];

    return 0;
}