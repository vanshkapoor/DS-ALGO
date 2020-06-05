// LCM: 12, 18 :==> 
// max value  is 12x18 = 216
// thus no lies between 18 and 216

// HCF: 12,18 :==>
// 2


#include<iostream>

using namespace std;

int gcd(int a, int b) 
{ 
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
   
    if (a == b) 
        return a; 
   
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 

void lcm(int n, int m)
{
    int i = n;
    // cout<<"i = "<<i<<endl;
    while(i<n*m)
    {
        if(i%m == 0)
        {
            cout<<i;
            break;
        }else{
            i = i+n;
        }
    }
    
}

int main()
{
    int n,m;
    cin>>n>>m;
    int tmp;

    if(n<m){
        tmp = m;
        m = n;
        n = tmp;
    }
    // n>m always
    lcm(n,m);
    cout<<endl;
    cout<<gcd(n,m);


    return 0;
}