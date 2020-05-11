#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int prec(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void infixtopostfix(string str)
{
    string s;
    std::stack<char> st;
    st.push('N');

    for (auto &i : str)
    {
        if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
        {
            // s.push_back(i);
            s += i;
        }

        else if (i == '(')
        {
            st.push(i);
            // s+=i;
        }

        else if (i == ')')
        {
            while (st.top() != 'N' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
                // s.push_back(c);
                s += c;
            }
            if (st.top() == '(')
            {
                st.pop();
            }
        }
        // operator
        else
        {
            while (st.top() != 'N' && prec(st.top()) >= prec(i))
            {
                char c = st.top();
                st.pop();
                // s.push_back(c);
                s += c;
            }

            st.push(i);
        }
    }
    while (st.top() != 'N')
    {
        char c = st.top();
        st.pop();
        s += c;
    }

    cout << s;
}

int main()
{
    std::stack<char> st;
    string str = "a+b+c-(d+e)";

    infixtopostfix(str);

    return 0;
}