// 1-2-3-4-5-6-7 ; k=3
// o/p =>  3-2-1-4-5-6-7

#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    queue<int> q;
    stack<int> st;

    int k = 3;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    queue<int> qq;
    qq = q;
    // while (!qq.empty())
    // {
    //     cout << qq.front() << endl;
    //     qq.pop();
    // }

    for (int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        // cout << st.top() << endl;
        q.push(st.top());
        st.pop();
    }
    // cout << q.size() - k;
    int m = q.size() - k;
    while (m > 0)
    {
        // cout << q.front() << endl;
        q.push(q.front());
        q.pop();
        m--;
    }

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}