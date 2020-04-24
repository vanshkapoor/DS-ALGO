#include<iostream>

using namespace std;

int main()
{
    int n=28;
    int rem = 0;
    string str;
    while(n>0)
    {
        rem = n%26;
        
        if(rem == 0)
        {
            //z
            n=n/26-1;
            cout<<'Z';
            str.push_back('Z');
        }else{
            n=n/26;
            cout<<rem-1+'A'<<endl;
            str.push_back(rem-1+'A');
        }
    }
    str.push_back('\0');

    cout<<str;
    return 0;
}