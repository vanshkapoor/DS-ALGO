#include<iostream>

using namespace std;

int main()
{
int n,rm,ono,check=0;
cout<<"number : ";
cin>>n;
ono = n;
while(n!=0)
{
rm = n%10;
check += rm*rm*rm;
n = n/10;
}

cout<<check;

if(check == ono)
{ cout<<"yes";
}else{
  cout<<"no";
}

return 0;
}
