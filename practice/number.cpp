#include<iostream>



using namespace std;


void fibo(int n)
{
	int org_no = n;
	int m = 0;
	int remainder;
	int s;
	while(n!=0)
	{
		remainder=n%10;
		m = m*10 + remainder;
		n=n/10;		
	}
	
	if(org_no == m)
	{
		cout<<"palindrome";
	}else{
		
		cout<<"not a palindrome";
	}
}


int main()
{
int p;
cout<<"enter no to check for palindrome";
cin>>p;
fibo(p);


return 1;
}


