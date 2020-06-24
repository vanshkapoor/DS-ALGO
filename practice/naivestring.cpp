#include<iostream>
#include<string.h>
using namespace std;

void naivestring(char arr[],char pat[],int la,int pa)
{
    for(int i=0;i<=arr[i]!='\0';i++)
    {
        int j;
        for(j=0;j<=pa;j++)
        {
            if(arr[i+j] != pat[j])
                break;

        }
                    
            if(j == pa)
                cout<<"matched string at position = "<<i<<"\n";

        // if(k+1 == pa)
        // {
        //     cout<<"matched string at position = "<<i<<"\n";
        // }
    }
}

int main()
{
    char arr[] = "vanshisvanshnotkanshbutvansh";
    char pat[] = "vansh";
    cout<<"naive \n";
    int la = strlen(arr);
    int pa = strlen(pat);
    naivestring(arr,pat,la,pa);
    return 0;
}