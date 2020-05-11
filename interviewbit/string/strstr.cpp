// Implement strStr().

//     strstr - locate a substring ( needle ) in a string ( haystack ). 
#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
    string A="vansh";
    string B="an";

    int found = strstr(A,B);
    cout<<found;

    return 0;
}