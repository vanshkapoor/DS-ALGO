#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string num = "1432219";
    int k=3;
    std::stack<char> st;

    for(int i=0;i<num.size()-1;i++)
    {
        if( (st.empty() && num[i]!='0') || (st.top())){
            st.push(num[i]);
        }else{

        }


    }
    


    return 0;
}