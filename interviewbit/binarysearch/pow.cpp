#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int x,n,d;

    x=2;
    n=3;
    d=3;
    int res=1;
    // int op = ;
    while(n>0)
    {
        res=res*x;
        cout<<res<<endl;
        n--;
    }

    int m = -1 % 20;
    cout<<20+m;

    cout<<res;
    return 0;
}