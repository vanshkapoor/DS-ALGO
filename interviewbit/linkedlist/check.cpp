#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *root = NULL;

void append(int x)
{

    struct node *temp = new struct node;
    temp->data = x;
    temp->next = NULL;

    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node *p = root;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
        // cout << "d" << p->next->data << endl;
    }
}

int getLength(struct node *p)
{
    if (p == NULL)
    {
        return 0;
    }
    return 1 + getLength(p->next);
}

int main()
{

    // struct node *p = new struct node;

    append(1);
    append(2);
    append(3);
    append(4);

    struct node *p = root;

    int len = getLength(p);

    cout << len << endl;
    cout << "data === " << p->data;

    return 0;
}