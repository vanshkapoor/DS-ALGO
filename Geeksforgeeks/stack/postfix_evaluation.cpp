#include <iostream>
#include <stack>

using namespace std;

int evaluate_expression(int a, int b, char str)
{
    switch (str)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    }
}

int main()
{
    string s = "100 200 + 2 / 5 * 7 +";
    stack<int> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }

        // do work for operator
        if (isdigit(s[i]))
        {
            int num = 0;
            while (isdigit(s[i]))
            {
                int a = (int)(s[i] - '0'); //231 =>   num=2; 23; 231
                // cout << a << endl;
                num = num * 10 + a;
                i++;
            }
            i--;
            cout << num << endl;
            st.push(num);
        }
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();

            int c = evaluate_expression(b, a, s[i]);
            cout << "c : " << c << endl;
            st.push(c);
        }
    }

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }

    return 0;
}