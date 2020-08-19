#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

Node *findLCA(Node *root, int a, int b)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == a || root->data == b)
    {
        return root;
    }
    Node *left_lca = findLCA(root->left, a, b);
    Node *right_lca = findLCA(root->right, a, b);

    if (left_lca && right_lca)
    {
        return root;
    }

    if (left_lca != NULL && right_lca == NULL)
    {
        return left_lca;
    }
    else if (left_lca == NULL && right_lca != NULL)
    {
        return right_lca;
    }
    else
    {
        return NULL;
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << findLCA(root, 5, 7)->data;

    return 0;
}