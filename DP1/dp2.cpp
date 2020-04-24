#include<iostream>

using namespace std;

int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    int a = fibo(n-1);
    int b = fibo(n-2);
    return a+b;
}


//  DYNAMIC PROGRAMMING
int fibo_dp(int n)
{
    int *ans = new int[n];

    ans[0]=0;
    ans[1]=1;

    for(int i=2;i<=n;i++)
    {
        ans[i] = ans[i-1] + ans[i-2];
    }

    return ans[n];
}

int main()
{
    int n;

    n = fibo_dp(7);
    cout<<n;



    return 0;
}