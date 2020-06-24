#include<iostream>
using namespace std;

int fibo_helper(int n,int ans[])
{
if(n<=1){
return n;
}

if(ans[n]!=-1)
{
return ans[n];
}

int a = fibo_helper(n-1,ans);
int b = fibo_helper(n-2,ans);

ans[n] = a+b;

return ans[n];
} 


int fibo(int n)
{
	int *ans = new int[n+1];
	for(int i=0;i<=n;i++)
	{
	ans[i] = -1;
	}
	return fibo_helper(n,ans);
}

int main()
{int n;
cin>>n;
int m = fibo(n);
cout<<m;

return 0;
}
