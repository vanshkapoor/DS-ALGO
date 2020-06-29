// #include <iostream>
#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *next;
};

void append(struct node *head)
{
    struct node *temp = new node;
    cout << "enter data";
    cin >> temp->data;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}

void print(struct node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << endl;
}

void bubblesort(struct node *head)
{
    struct node *p = head;

    int count = 4;

    for (int i = 0; i < count; i++)
    {
        p = head;
        for (int j = 0; j < count - i - 1; j++)
        {
            if (p->next == NULL)
            {
                continue;
            }
            if (p->data > p->next->data)
            {
                swap(p->data, p->next->data);
            }
            p = p->next;
        }
    }
}

int main()
{
    struct node *root = NULL;
    struct node *temp = new node;
    temp->data = 2;
    temp->next = NULL;
    root = temp;
    append(root);
    append(root);
    append(root);
    print(root);
    bubblesort(root);
    print(root);

    return 0;
}
