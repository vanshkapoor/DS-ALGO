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

void mergelinkelist(struct node *l1, struct node *l2)
{
    struct node *last = new node;
    while (l1 != NULL && l2 != NULL)
    {
        if (l1->data <= l2->data)
        {
            if (last == NULL)
            {
                last = l1;
            }
            else
            {
                last->next = l1;
            }
            last = l1;
            l1 = l1->next;
        }
    }
}

void pushatbeg(struct node **head, int data)
{
    struct node *temp = new node;
    temp->data = data;
    temp->next = *head;
    *head = temp;
}

void linklistsplit(struct node *head, struct node **a, struct node **b)
{
    // FIND THE MID POINT HERE AND SPLIT HEAD INTO TWO: A AND B
    struct node *fast;
    struct node *slow;
    slow = head;
    fast = head->next;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }

    *a = head;       //FRONT
    *b = slow->next; //BACK
    slow->next = NULL;
}

struct node *mergesort(struct node *a, struct node *b)
{
    struct node *result = NULL;

    if (a == NULL)
    {
        return b;
    }
    else if (b == NULL)
    {
        return a;
    }

    if (a->data >= b->data)
    {
        result = b;
        result->next = mergesort(a, b->next);
    }
    else
    {
        result = a;
        result->next = mergesort(a->next, b);
    }
    return result;
}

void merge(struct node **head)
{
    struct node *obj = *head;
    // cout << obj->data << endl;

    struct node *a;
    struct node *b;

    if (obj == NULL || obj->next == NULL)
    {
        return;
    }

    linklistsplit(obj, &a, &b);

    merge(&a);
    merge(&b);

    *head = mergesort(a, b);
    print(*head);
    return;
}

int main()
{
    struct node *a = NULL;
    // a = temp;
    pushatbeg(&a, 1);
    pushatbeg(&a, 4);
    pushatbeg(&a, 3);
    pushatbeg(&a, 2);
    pushatbeg(&a, 9);

    print(a);

    merge(&a);
    print(a);

    return 0;
}
