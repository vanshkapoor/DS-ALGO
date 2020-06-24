// 1-2-3-4-5-4-3-5-2
//   st: 5
//   v:  3-4-5-5-5-5-5

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    stack<int> st;
    vector<int> v;
    int maxx = 0;

    for (int i = 0; i < n - k; i++)
    {

        for (int j = i; j < i + k; j++)
        {
            if (st.empty())
            {
                st.push(arr[i]);
            }
            else
            {
                if (maxx < arr[i])
                {
                    /* code */
                    // while (!st.empty() && st.top() < arr[i])
                    // {
                    //     st.pop();
                    // }
                    maxx = arr[i];
                    // st.push(arr[i]);
                }
                else
                {
                    continue;
                }
            }
        }
        v.push_back(st.top());
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}