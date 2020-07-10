#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    stack<int> st2;
    st2.push(1);
    st2.push(2);
    st2.push(3);
    st2.push(4);

    cout << st.top() << endl;
    cout << st2.top() << endl;

    swap(st, st2);

    cout << st.top() << endl;
    cout << st2.top() << endl;

    return 0;
}
