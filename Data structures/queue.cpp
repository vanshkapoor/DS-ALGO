#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);

    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();

    if (q.empty())
    {
        cout << "empty";
    }

    return 0;
}