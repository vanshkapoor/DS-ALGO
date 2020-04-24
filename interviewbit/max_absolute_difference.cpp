#include<iostream>

using namespace std;

int main()
{
    int A[]={1,3,-1};
    int m=sizeof(A)/sizeof(A[0]);
    int max=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            int c = abs(A[i]-A[j]) + abs(i-j);
            if(c>max)
            {
                max=c;
            }
        }
    }

    cout<<max;


    return 0;
}