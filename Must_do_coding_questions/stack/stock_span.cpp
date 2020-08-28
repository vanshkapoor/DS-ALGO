#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int prices[] = {100, 80, 90, 70, 50, 90, 100, 120};
    int days[8] = {0};
    int span[8];
    stack<int> st;
    st.push(0);
    int n = 8;
    span[0] = 1;

    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && prices[st.top()] < prices[i])
        {
            st.pop();
        }

        if (!st.empty())
        {
            span[i] = i - st.top();
        }
        else
        {
            span[i] = i + 1;
        }
        st.push(i);
    }

    for (int i = 0; i < n; i++)
    {
        cout << span[i];
    }

    return 0;
}