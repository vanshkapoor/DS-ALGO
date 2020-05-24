#include <iostream>

using namespace std;

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
    tree(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// tree *root = NULL;

void inorder(tree *obj)
{
    if (obj == NULL)
    {
        return;
    }
    inorder(obj->left);
    cout << obj->data << " - ";
    inorder(obj->right);
}

int main()
{
    struct tree *root = new tree(1);
    root->left = new tree(3);
    root->right = new tree(4);
    root->left->left = new tree(2);
    root->left->left->right = new tree(8);
    inorder(root);
    // root =

    return 0;
}