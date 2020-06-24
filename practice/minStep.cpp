//to find minimum number of steps needed to mimise a number to 1 using 3 steps:
//1) decrement by 1
//2) by 3
//3) by 2

#include<iostream>
#include<cmath>
#include<limits.h>

using namespace std;

int c=0;

int minstep(int n,int c)
{
    if(n==1)
    {
        return c;
    }
    if(n%3 == 0){
        n=n/3;
        c++;
        minstep(n,c);
    }else if(n%2 == 0){
        n=n/2;
        c++;
        minstep(n,c);
    }else{
        n=n-1;
        c++;
        minstep(n,c);
    }
}


int minstep2(int n)
{
    if(n<=1){
        return 0;
    }
    int y = INT_MAX , z = INT_MAX;
    int x = minstep2(n-1);
//    cout<<n<<"\n";

    if(n%2 == 0){
        y = minstep2(n/2);
    }

    if(n%3 == 0){
        z = minstep2(n/3);
    }

    int ans = min(x,min(y,z)) + 1;
    return ans;
}

int main()
{
int n;
cin>>n;
int m = minstep(n,c);

int z = minstep2(n);
cout<<"z ="<<z<<"\n";
cout<<m;
}
