#include <iostream>
#include <bits/stdc++.h>
#include <queue>

using namespace std;

class tree
{
public:
    int data;
    tree *left;
    tree *right;
    tree(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void insert(struct tree *root, int data)
{
    struct tree *obj = root;
    queue<tree *> q;
    q.push(obj);

    while (!q.empty())
    {
        struct tree *t = q.front();
        q.pop();

        if (t->left != NULL)
        {
            q.push(t->left);
        }
        else
        {
            t->left = new tree(data);
            return;
        }

        if (t->right != NULL)
        {
            q.push(t->right);
        }
        else
        {
            t->right = new tree(data);
            return;
        }
    }
}

void print(struct tree *p)
{
    if (p == NULL)
    {
        return;
    }
    print(p->left);
    cout << p->data << " ";
    print(p->right);
}

int main()
{
    tree *obj = new tree(1);
    obj->left = new tree(2);
    obj->right = new tree(3);
    obj->left->left = new tree(4);
    obj->left->right = new tree(5);
    obj->left->right->left = new tree(7);

    insert(obj, 6);
    print(obj);

    return 0;
}