#include <iostream>

using namespace std;

class stack
{
private:
    int n;
    int top1;
    int top2;
    int *arr;

public:
    stack(int n)
    {
        top1 = 0;
        top2 = n;
        arr = new int[n];
    }

    void push1(int x)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = x;
        }
        else
        {
            cout << "overflowed";
        }
    }

    void push2(int x)
    {
        if (top2 > top1 + 1)
        {
            top2--;
            arr[top2] = x;
        }
        else
        {
            cout << "overflowed";
        }
    }

    int pop1()
    {
        if (top1 == 0)
        {
            cout << "No elements";
        }
        else
        {
            int x = arr[top1];
            top1--;
            return x;
        }
    }

    int pop2()
    {
        if (top2 == n - 1)
        {
            cout << "No elements";
            exit(1);
        }
        else
        {
            int x = arr[top2];
            top2++;
            return x;
        }
    }
};

int main()
{
    stack obj(5);
    obj.push1(1);
    obj.push2(2);
    return 0;
}
