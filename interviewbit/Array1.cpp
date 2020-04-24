#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int A[]={1, 1, 1, 3, 2, 1, 1, 2, 5, 9, 6, 5 };
    int m=0;
    int x = 12;
    for(int i=0;i<12;i++)
    {
        m = m+ (A[i] * pow(10,x-1));
        x--;
    }

    m=m+1;
    cout<<m;

    int ctr=0;
    while(m != 0)
    {
        A[ctr] = m%10;
        ctr++;
        m=m/10;
    }
        int sz = sizeof(A)/sizeof(A[0]);

    cout<<endl;

        for(int i=0;i<sz;i++)
        {
            cout<<A[i]<<" ";
        }
    
    cout<<ctr<<endl;

        int i=0;
        int j=sz-1;
        int temp=0;
        while(i <= j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            
            i++;
            j--;
        }

        for(int i=0;i<sz;i++)
        {
            cout<<A[i];
        }

    return 0;
}