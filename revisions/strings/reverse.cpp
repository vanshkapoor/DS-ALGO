#include <iostream>
#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main()
{
    string s = "vansh kapoor is my name";
    s += " ";
    string ns = "";
    stack<string> st;
    // reverse(s.begin(), s.end());
    // cout << s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            st.push(ns);
            ns = "";
        }
        else
        {
            ns += s[i];
        }
    }

    while (!st.empty())
    {
        ns += st.top();
        ns += " ";
        st.pop();
    }

    cout << ns;

    return 0;
}