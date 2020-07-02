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

int height(tree *obj)
{
    if (obj == NULL)
    {
        return 0;
    }

    return 1 + max(height(obj->left), height(obj->right));
}

int diameter(tree *obj)
{
    if (obj == NULL)
    {
        return 0;
    }

    int lheight = height(obj->left);
    int rheight = height(obj->right);

    int ldiameter = diameter(obj->left);
    int rdiameter = diameter(obj->right);

    return max(lheight + rheight + 1, max(ldiameter, rdiameter));
}

// void view(tree *obj)
// {
//     for(int i=1;i<)
// }

int maxi = 0;
void findLevels(tree *obj, int level)
{
    if (obj == NULL)
    {
        return;
    }
    maxi = max(maxi, level + 1);
    // level +=1;
    findLevels(obj->left, level + 1);
    findLevels(obj->right, level + 1);
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
    cout << "diameter = " << diameter(obj);
    findLevels(obj, 0);
    cout << "max -->" << maxi;

    return 0;
}