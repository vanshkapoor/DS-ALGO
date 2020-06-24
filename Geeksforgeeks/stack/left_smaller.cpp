#include <iostream>
#include <stack>

using namespace std;

int smallest(int arr[], int n, stack<int> st)
{
}

int main()
{
    // int arr[] = {2, 3, 4, 1, 10, 9, 4, 5};
    int arr[] = {1, 3, 0, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    stack<int> st;

    // smallest(arr,n,st);

    for (int i = 0; i < n; i++)
    {
        if (st.empty())
        {
            st.push(arr[i]);
            continue;
        }

        if (arr[i] > st.top())
        {
            cout << arr[i] << " ---> " << st.top() << endl;
            st.push(arr[i]);
            continue;
        }

        while (!st.empty() && arr[i] < st.top())
        {
            /* code */
            // cout<<st.top()<<"--->"<<-1<<endl;
            st.pop();
        }
        if (!st.empty())
        {
            cout << arr[i] << "--->" << st.top() << endl;
        }
        st.push(arr[i]);
    }

    while (!st.empty())
    {
        cout << st.top() << " --->" << -1 << endl;
        st.pop();
    }

    return 0;
}