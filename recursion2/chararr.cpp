#include<iostream>

using namespace std;

int lengthofstr(char str[])
{
    if(str[0] == '\0')
    {
        return 0;
    }else{
        int m = lengthofstr(str++);
        return 1+m;
    }
}


int main()
{
    char str[10];
    cin>>str;

    int m = lengthofstr(str);
    cout<<m;

    return 0;
}