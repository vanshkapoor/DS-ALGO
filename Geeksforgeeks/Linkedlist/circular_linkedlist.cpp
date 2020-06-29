#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
};

void push(struct node **head, int data)
{
    struct node *temp = new node;
    temp->data = data;
    temp->next = *head;

    if (*head == NULL)
    {
        temp->next = temp;
    }
    else
    {
        struct node *p = *head;
        while (p->next != *head)
        {
            p = p->next;
        }
        p->next = temp;
    }
    *head = temp;
}

int main()
{
    struct node *root = NULL;
    push(&root, 1);
    push(&root, 2);
    push(&root, 3);

    cout << root->data;
    return 0;
}
