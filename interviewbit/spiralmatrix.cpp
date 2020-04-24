#include<iostream>

using namespace std;

int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    int k,l,m,n;
    k=0;  // first row
    l=3;  // last row
    m=0;  // first column
    n=3;  // last column

    while(k<l && m<n)
    {
        for(int i=m;i<n;i++)
        {
            cout<<arr[k][i]<<" ";
        }
        k++;

        for(int i=k;i<l;i++)
        {
            cout<<arr[i][n-1]<<" ";
        }
        n--;
        

        if(k<l){
        for(int i=n-1;i>=m;--i)
        {
            cout<<arr[l-1][i]<<" ";
        }
        l--;
        }
        
        if(m<n){        
        for(int i=l-1;i>=k;--i)
        {
            cout<<arr[i][m]<<" ";
        }
        m++;

        }
            

    }




    return 0;
}