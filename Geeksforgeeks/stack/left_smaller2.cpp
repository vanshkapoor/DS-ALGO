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
        while (!st.empty() && arr[i] <= st.top())
        {
            st.pop();
        }

        if (st.empty())
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << st.top() << endl;
        }
        st.push(arr[i]);
    }

    return 0;
}