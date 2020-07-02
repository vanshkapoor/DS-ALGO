#include <iostream>
#include <bits/stdc++.h>

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

void leftview(tree *obj, int level, int &maxLevel)
{
    if (obj == NULL)
    {
        return;
    }
    if (maxLevel < level)
    {
        cout << obj->data << " - ";
        maxLevel = level;
    }
    leftview(obj->left, level + 1, maxLevel);
    leftview(obj->right, level + 1, maxLevel); //FOR RIGHT VIEW SWAP THESE RECURSIVE CALLS
}

void printLeafnodes(tree *obj)
{
    if (obj == NULL)
    {
        return;
    }
    if (obj->left == NULL && obj->right == NULL)
    {
        cout << obj->data << " ";
        return;
    }
    printLeafnodes(obj->left);
    printLeafnodes(obj->right);
}

int main()
{
    tree *obj = new tree(1);
    obj->left = new tree(2);
    obj->right = new tree(3);
    obj->left->left = new tree(4);
    obj->left->right = new tree(5);
    obj->left->right->left = new tree(7);

    // print(obj);
    // printLeafnodes(obj);
    int maxLev = 0;
    leftview(obj, 1, maxLev);

    return 0;
}