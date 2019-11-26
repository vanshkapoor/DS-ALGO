#include <iostream> 
#include<string.h>

using namespace std; 
  
int main()
{
    char ar[4][10] = {"one","two","three","four"};
    string str[4] = {"one","two","three","four"};

    for(int i=0;i<4;i++)
    {
        cout<<str[i]<<"-";
    }


    for(i=0;i<4;i++)
    {
        cout<<ar[i]<<"-";
    }

// STRING TO CHAR ARRAY
    string s = "vansh";
    int n;
    n = s.length();
    // n = strlen(s);
    char *ss = new char[n];
    for(i = 0;s[i]!='\0';i++)
    {
        ss[i] = s[i];
    }


    return 0;
}