#include<iostream>

using namespace std;

int main()
{
    int i;
    char arr[50];
    char str[] = "THE QUICK BROWN";
    for(i=65;i<=90;i++)
    {
        arr[i-65] = i;
    }
    for(i=65;i<=90;i++)
    {
      cout<<arr[i-65];
    }
    cout<<"-----"<<str[0];
    for(int i = 0;str[i]!='\0';i++)
    {
        for(int j=0;j<=90;j++)
        {
            if(arr[j]==str[i])
            {
                cout<<"matched string = "<<arr[j];
                // break;
            }
        }
    } 

return 0;
}