#include <iostream>
#include <stack>

using namespace std;

int prece(char str)
{
    if (str == '^')
    {
        return 3;
    }
    else if (str == '*' || str == '/')
    {
        return 2;
    }
    else if (str == '+' || str == '-')
    {
        return 1;
    }
    else
        return -1;
}

int main()
{
    stack<char> st;
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    string ss;

    st.push('N');

    int i = 0;
    while (exp[i])
    {

        if ((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z'))
        {
            ss += exp[i];
        }
        else
        {

            if (exp[i] == '(') //get (
            {
                st.push('(');
            }
            else if (exp[i] == ')') //get )
            {
                while (st.top() != '(' && st.top() != 'N')
                {
                    char c = st.top();
                    ss += c;
                    st.pop();
                }
                if (st.top() == '(')
                {
                    st.pop();
                }
            }
            else
            {
                while (prece(exp[i]) <= prece(st.top()) && st.top() != 'N') //got operator
                {
                    char c = st.top();
                    ss += c;
                    st.pop();
                }
                st.push(exp[i]);
            }
        }

        i++;
    }

    while (st.top() != 'N')
    {
        char c = st.top();
        st.pop();
        ss += c;
    }

    cout << ss;

    return 0;
}