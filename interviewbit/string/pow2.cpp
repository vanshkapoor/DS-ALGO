#include<iostream>
#include<math.h>
#include<sstream>

using namespace std;



int main()
{
    int ct=0;
    string A="256";
    stringstream x(A);
    long long int i = 0;
    x>>i;
    
    if(i==1||i==0)
    {
        return 0;
    }
    cout<<i<<endl;
    cout<<ceil(log2(i))<<endl;
    cout<<floor(log2(i))<<endl;
    if(ceil(log2(i)) == floor(log2(i))){
        cout<<1;
    }else{
        cout<<0;
        // return 0;
    }
 
    return 0;
}