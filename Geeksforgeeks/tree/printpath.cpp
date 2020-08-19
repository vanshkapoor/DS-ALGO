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

void printarr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}

void printpath(tree *obj, int data, int arr[], int pathlen)
{
    if (obj == NULL)
    {
        return;
    }

    arr[pathlen] = obj->data;
    // arr.push(obj->data);

    if (obj->data == data)
    {
        printarr(arr, pathlen);
        return;
    }

    printpath(obj->left, data, arr, pathlen + 1);
    printpath(obj->right, data, arr, pathlen + 1);
}

void pathsum(tree *obj, int sum, int arr[], int pathlen)
{
    if (obj == NULL)
    {
        if (sum == 0)
        {
            printarr(arr, pathlen);
            return;
        }
        return;
    }

    if (sum < 0)
    {
        return;
    }

    if (sum == 0)
    {
        printarr(arr, pathlen);
        return;
    }
    arr[pathlen] = obj->data;

    pathsum(obj->left, sum - obj->data, arr, pathlen + 1);
    pathsum(obj->right, sum - obj->data, arr, pathlen + 1);
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
    int arr[40];
    // printpath(obj, 7, arr, 0);
    pathsum(obj, 8, arr, 0);

    // vector<int> v;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i];
    // }

    return 0;
}