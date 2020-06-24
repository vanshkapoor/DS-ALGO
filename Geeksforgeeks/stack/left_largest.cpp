#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int arr[] = {1, 3, 0, 2, 5, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    stack<int> st;

    for (int i = 0; i < n; i++)
    {

        if (!st.empty() && arr[i] > st.top())
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