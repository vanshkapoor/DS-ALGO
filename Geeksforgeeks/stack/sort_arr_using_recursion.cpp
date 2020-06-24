// SORT AN ARRAY USING RECURSION

#include <iostream>
#include <stack>

using namespace std;

stack<int> st;
stack<int> tmp;

void sort(int arr[], int n, int x)
{
    if (st.empty())
    {
        st.push(x);
    }
    else if (x > st.top())
    {
        st.push(x);
    }
    else
    {
        int a = st.top();
        st.pop();
        sort(arr, n, x);
        st.push(a);
    }
}

void sort_handle(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (st.empty())
        {
            st.push(arr[i]);
        }
        else
        {
            sort(arr, n, arr[i]);
        }
    }
}

int main()
{
    int arr[] = {1, 3, 2, 5, 4, 7, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort_handle(arr, n);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}