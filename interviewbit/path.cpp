#include<iostream>

using namespace std;

int ct=0;

int find(int i, int j, int A, int B)
{
    if(i==A&&j==B)
    {
        ct++;
        cout<<"-----";
        return 0;
    }
    
    if(i>A || j>B)
    {
        return 0;
    }
    cout<<i<<" "<<j<<endl; 
    find(i+1,j,A,B);
    find(i,j+1,A,B);
}


int main()
{
    int x;
    x = find(0,0,2,3);
    cout<<ct;
    return 0;
}