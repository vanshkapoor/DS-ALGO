#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int minn = INT8_MAX;
int cnt = 0;
struct node *object(int data)
{
    struct node *newnode = new struct node();
    // (struct node*)malloc(sizeof(struct node))
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

int KthSmallest(node *root, int k)
{
    if (root == NULL)
    {
        return 0;
    }

    int m = KthSmallest(root->left, k);

    cout << cnt << " : " << root->data << endl;
    cnt++;
    if (cnt == k)
    {
        cout << "MAIN VALUE  =  " << root->data << endl;
        return root->data;
    }
    return KthSmallest(root->right, k);
    // return 0;
}

int main()
{
    struct node *root = object(4);
    root->left = object(2);
    root->right = object(1);
    root->left->left = object(5);
    root->left->right = object(3);
    root->right->left = object(6);

    // cout << root->data;
    // cout << endl;
    // cout << root->left->data;
    //
    cout << KthSmallest(root, 3);

    return 0;
}