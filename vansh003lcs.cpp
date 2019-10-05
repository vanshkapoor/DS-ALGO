//FINDING LONGEST SUBSEQUENCE
//COMPILER : g++ (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0

#include<iostream>

using namespace std;

int lcs(char str1[],char str2[],int i,int j)
{
  if(str1[i]=='\0' || str2[j]=='\0')
  { 
    return 0;     
  }else if(str1[i] == str2[j])
  {
    return 1 + lcs(str1,str2,i+1,j+1);    
  }else{
    int a = lcs(str1,str2,i+1,j);
    int b = lcs(str1,str2,i,j+1);
    return (a>b)?a:b;
  }

}


int main()
{
char str1[1000] ;
char str2[1000] ;
cout<<"Enter a string : ";
cin>>str1;
cout<<"\n Enter another string : ";
cin>>str2;

int lcsn = lcs(str1,str2,0,0); 
cout<<"LCS : "<<lcsn;

return 0;
}
