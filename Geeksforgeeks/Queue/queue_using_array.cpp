#include <iostream>

using namespace std;

class queue
{
private:
    int front;
    int rear;
    int size;
    int capacity;
    int *arr;

public:
    queue(int n)
    {
        front = 0;
        arr = new int[n];
        rear = 0;
        capacity = n;
        size = 0;
    }

    void push(int n)
    {
        if (rear <= capacity - 1)
        {
            arr[rear] = n;
            rear++;
            size++;
        }
        else
        {
            cout << "overflowed" << endl;
        }
    }

    void pop()
    {

        if (front == rear || front >= capacity - 1)
        {
            cout << "empty" << endl;
            return;
        }
        cout << "removing" << arr[front] << endl;
        front++;
        size--;
    }

    void increase_size()
    {
        int *new_arr = new int[capacity * 2];
        for (int i = front; i <= rear; i++)
        {
            new_arr[i] = arr[i];
        }
        delete[] arr;
        arr = new_arr;
        capacity *= 2;
    }

    void display()
    {
        if (front == rear)
        {
            cout << "no element";
            return;
        }

        for (int i = front; i < rear; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    queue q(3);
    q.push(1);
    q.push(2);
    q.display();
    q.pop();
    q.display();

    return 0;
}