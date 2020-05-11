// print length of last word
// start from end and if you find  " " then stop 
#include<iostream>

using namespace std;

int main()
{
    string str = "hello world";
    int m = str.length()-1;
    // cout<<str[m];
    int cnt=0;
    for(int i = m;i>0;i--)
    {
        char c = str[i];
        if(isspace(c))
        {
            break;
        }
        cnt++;
    }
    cout<<cnt;


    return 0;
}