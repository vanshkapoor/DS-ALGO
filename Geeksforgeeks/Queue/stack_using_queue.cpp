// 1-2-3-4-5

// FOR STACK :  o/p: 5-4-3-2-1   i/p: 1-2-3-4-5
// FOR QUEUE :  o/p: 1-2-3-4-5   i/p: 1-2-3-4-5

// for queue to behave like stack
// queue will be inserted in reverse OR  queue will be deleted in reverse

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q1;
    queue<int> q2;
    int n;
    int no;

    cout << "enter size";
    cin >> n;

    while (n > 0)
    {
        cout << "enter no" << endl;
        cin >> no;

        if (q1.empty())
        {
            q1.push(no);
        }
        else
        {
            while (!q1.empty())
            {
                int front = q1.front();
                q2.push(front);
                q1.pop();
            }
            q1.push(no);
            while (!q2.empty())
            {
                q1.push(q2.front());
                q2.pop();
            }
        }
        n--;
    }

    // display

    while (!q1.empty())
    {
        cout << q1.front() << endl;
        q1.pop();
    }

    return 0;
}