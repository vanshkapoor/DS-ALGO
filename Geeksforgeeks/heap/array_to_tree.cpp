#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void convert(int arr[], int n, int i)
{
    if (i < n)
    {
        cout << arr[i];
        convert(arr, n, 2 * i + 1);
        convert(arr, n, 2 * i + 2);
    }
}

Node *tobt(int arr[], int n, int i)
{
    if (i < n)
    {
        Node *obj = new Node(arr[i]);
        obj->left = tobt(arr, n, 2 * i + 1);
        obj->right = tobt(arr, n, 2 * i + 2);
        return obj;
    }
    return NULL;
}

void print(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " - ";
    print(root->left);
    print(root->right);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    Node *root = NULL;

    int n = sizeof(arr) / sizeof(arr[0]);

    convert(arr, n, 0);
    cout << endl;

    root = tobt(arr, n, 0);
    print(root);

    return 0;
}