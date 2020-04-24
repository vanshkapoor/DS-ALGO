#include<iostream>

using namespace std;

int gcd(int a,int b)
{
    if(a == 0||b==0)
    {
        return max(a,b);
    }

    for(int i=b;i>=1;i--)
    {
        if( (a%i == 0) && (b%i == 0))
        {
            return i;
        }
    }
    // return 1;
}



int main()
{
    int a=16,b=16;

    cout<<gcd(a,b);


    return 0;
}