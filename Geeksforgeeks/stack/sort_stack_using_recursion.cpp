#include <iostream>
#include <stack>

using namespace std;

void sort(stack<int> st, int a)
{
    if (st.empty())
    {
        st.push(a);
        // return;
    }
    else
    {
        if ((st.top() < a) && (!st.empty()))
        {
            st.push(a);
            // return;
        }
        else
        {
            int x = st.top();
            st.pop();
            sort(st, a);
            st.push(x);
        }
    }
}

void sort_handle(stack<int> st)
{
    if (!st.empty())
    {
        int a = st.top();
        st.pop();
        sort_handle(st);
        sort(st, a);
    }
}

void print(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}

int main()
{
    stack<int> st;

    st.push(34);
    st.push(3);
    st.push(31);
    st.push(98);
    st.push(92);

    sort_handle(st);
    print(st);

    return 0;
}