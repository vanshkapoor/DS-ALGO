// Given a number n the task is to complete the function which returns an integer denoting the smallest number evenly divisible by each number from 1 to n.

#include<iostream>

using namespace std;


long long gcd(long long a, long long b)
{
    if(a==0){return b;}
    if(b==0){return a;}
    if(a==b){return a;}
    if(a>b)
    {
        return gcd(a-b,b);
    }
    else{return gcd(a,b-a);}
}


int main()
{
    int n;
    cin>>n;
    int m = n;

    // METHOD 1 : SIMPLE
    for(int i=1;i<=n;i++)
    {
        if(m%i != 0){
            m++;
            i=1;
        }
    }
    cout<<m;


// METHOD 2 : LCM from i=1 till N
 long long total = 1;
    for(long long i=1;i<=n;i++)
    {
        total = (total*i) / (gcd(total,i));
    }
    cout<<endl;
      cout<<total;  


    return 0;
}