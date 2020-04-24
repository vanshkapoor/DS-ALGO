#include<iostream>

using namespace std;


int main()
{
    string str;
    int A=5;

if(A==0)
    {
        str.push_back('0');
        return str;
    }
    
    while(A>0)
    {
        if(A%2 == 0)
        {
            str.push_back('0');
            A=A/2;
        }else{
            str.push_back('1');
            A=A/2;
        }
    }
   
    cout<<str;

    return 0;
}