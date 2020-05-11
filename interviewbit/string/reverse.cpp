// reverse character wise

#include<iostream>

using namespace std;

int main()
{
    string A="vansh kapoor";    
    string str;
    int i = A.length()-1;
    while(i>=0)
    {
        str.push_back(A[i]);
    }
    str.push_back('\0');

    return 0;
}