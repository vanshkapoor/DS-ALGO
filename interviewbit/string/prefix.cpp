// Given the array of strings A,
// you need to find the longest string S which is the prefix of ALL the strings in the array.

// Longest common prefix for a pair of strings S1 and S2 is the longest string S which is the prefix of both S1
// and S2.

// For Example, longest common prefix of "abcdefgh" and "abcefgh" is "abc".

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string>s;
    s.push_back("bhumi");
    s.push_back("bhumika");
    s.push_back("bhumi");
    cout<<s.size()<<endl;
    cout<<s[0]<<endl;
    cout<<s[0][0]<<endl;
    cout<<s[0].size();
    cout<<endl;

    int m = s.size();
    // caclulate n
    int min = INT8_MAX;
    for(int i=0;i<m;i++)
    {
        if(s[i].size()<min)
        {
            min = s[i].size();
        }
    }

    int n = min;

    int i=0;
    string str;
    // int j=1;
    int c=0;
    int flag=1;  //1 means same , 0 means stop
    for(int i=0;i<n;i++)
    {
        char x = s[0][i]; //s[0][c] can also be used here
        int j=1;
        while(j<m)
        {
            if(s[j][i] != x)
            {
                flag = 0;
            }
            j++;
        }
        if(flag == 0)
        {
            cout<<str<<endl;
            // return str;
        }
        str.push_back(x);
        c++;
    }

    if(flag==1)
    {
        cout<<str;
    }

    // int n = min(s)

    // s[0][0] == s[1][0] ... == s[m][0]
    // s[0][1] == s[1][1] ... == s[m][1]
    // s[0][2] == s[1][2] ... == s[m][2]
    // ...
    // ...
    // s[0][n] == s[1][n] ... == s[m][n]




    return 0;
}