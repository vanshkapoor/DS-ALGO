#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int A;
    cin>>A;

    int n = A;
    int rem = 0;
    int num=0;
    cout<<sizeof(A)<<endl;



// to find bit of a number
    int count=0;
    n = abs(A);
    while (n) 
   { 
        count++; 
        n >>= 1; 
    } 
     cout<<(int)log(n)+1<<endl;
    // cout<<count<<endl;




    if(n<0){
        cout<<0;
    }
    while(n>0)
    {
        num = n%10;
        rem = rem*10+num;
        n=n/10;
    }
    cout<<rem;
    if(rem == A)
    {
        cout<<1;
    }else{
        cout<<0;
    }

}