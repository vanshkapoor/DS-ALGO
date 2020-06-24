#include<iostream>

using namespace std;


int main()
{
    int z=1,mn=2*5;
    for(int i=1; i< 5;i++)
    {
        for(int k=1;k<z;k++)
        {
            cout<<" ";
        }
        z++;
        for(int j=5;j>i;j--)
        {
            cout<<"+";
        }        
        cout<<"\n";
    }

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<mn;k++){
            cout<<"+";
        }
        cout<<"\n";
        mn = mn-2;
    }

    cout<<"\n";
    for(int i=1;i<=5;i++)
    {
        for(int j=5-1;j>=i;j--)
        {
            cout<<" ";
        }    
        for(int k=1;k<=i;k++)
        {
            cout<<"+ ";
        }
        cout<<"\n";
    }

    return 0;
}
