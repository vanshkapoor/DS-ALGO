#include<iostream>
using namespace std;


class tr
{
    public:
    int data;
    tr *left;
    tr *right;
    tr(int data)
    {
        this->data = data;
        left=right=NULL;
    }
};

void inorder(tr *obj)
{
    if(obj == NULL)
    {
        return;
    }
    inorder(obj->left);
    cout<<obj->data<<" --> ";
    inorder(obj->right);
}

int main()
{
    tr *obj = new tr(4);
    obj->left = new tr(2);
    obj->right = new tr(1);
    obj->left->left = new tr(3);
    obj->left->right = new tr(6);
    obj->right->left = new tr(9);
    inorder(obj);

    return 0;
}