#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int arr[] = {4, 5, 2, 25};
    stack<int> st;
    int n = sizeof(arr) / sizeof(arr[0]);
    int arr1[n];

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[i] >= st.top())
        {
            /* code */
            st.pop();
        }

        if (st.empty())
        {
            arr1[i] = -1;
        }
        else
        {
            arr1[i] = st.top();
        }
        st.push(arr[i]);
    }

    return 0;
}
