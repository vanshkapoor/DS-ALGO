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
    struct node *p = head;
    while (p->next->next != NULL)
    {
        cout << p->data << "->";
        p = p->next;
    }
    p->next = NULL;
    cout << endl;
}

void print2(struct node *head)
{
    while (head != NULL)
    {
        cout << head->data << "-";
        head = head->next;
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
    print2(root);

    return 0;
}
