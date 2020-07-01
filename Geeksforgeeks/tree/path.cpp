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

bool path(struct tree *obj, vector<int> &v, int data)
{
    if (obj == NULL)
    {
        return false;
    }

    v.push_back(obj->data);

    if (obj->data == data)
    {
        return true;
    }

    if (path(obj->left, v, data) || path(obj->right, v, data))
    {
        return true;
    }

    v.pop_back();
    return false;
}

int main()
{
    tree *obj = new tree(1);
    obj->left = new tree(2);
    obj->right = new tree(3);
    obj->left->left = new tree(4);
    obj->left->right = new tree(5);
    obj->left->right->left = new tree(7);

    print(obj);
    vector<int> v;
    path(obj, v, 5);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }

    return 0;
}