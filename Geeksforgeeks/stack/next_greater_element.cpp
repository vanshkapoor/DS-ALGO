#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int arr[] = {11, 13, 21, 3, 10, 9, 8};
    stack<int> st;
    int n = sizeof(arr) / sizeof(arr[0]);

    st.push(arr[0]);

    for (int i = 1; i < n; i++)
    {
        cout << st.top() << endl;
        if (st.empty())
        {
            st.push(arr[i]);
            continue;
        }

        while (!st.empty() && arr[i] > st.top())
        {
            cout << st.top() << " ------> " << arr[i] << endl;
            st.pop();
        }
        st.push(arr[i]);
    }

    while (st.empty() == false)
    {
        /* code */
        cout << st.top() << " ------> " << -1 << endl;
        st.pop();
    }

    return 0;
}