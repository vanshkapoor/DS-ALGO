// GREEDY PROBLEM - 1

#include<iostream>
using namespace std;

void selectactivity(int s[],int f[],int m)
{
    int j=0;
    for(int i=1;i<m;i++)
    {
        if(s[i] >= f[j])
        {
            cout<<s[i];
            j=i;
        }
    }
}


int main()
{
    int s[] = {1,3,5,7,8,10};
    int f[] = {2,4,6,9,10,12};
    int n = sizeof(s)/sizeof(s[0]);
    selectactivity(s,f,n);
}