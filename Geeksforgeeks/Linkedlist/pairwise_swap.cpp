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

// data wise
void pairwiseswap(struct node *head)
{
    struct node *p = head;
    int temp = 0;
    struct node *q;
    while (p->next != NULL)
    {
        q = p->next;
        swap(p->data, q->data);
        // temp = p->data;
        // p->data = q->data;
        // q->data = temp;
        if (p->next->next == NULL)
        {
            return;
        }
        p = p->next->next;
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

    pairwiseswap(root);
    print(root);

    return 0;
}
