#include <iostream>

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

void search(tree *ob, int data)
{
    if (ob == NULL)
    {
        return;
    }
    if (ob->data == data)
    {
        // return ob;
        cout << "found";
        return;
    }

    if (ob->data > data)
    {
        search(ob->left, data);
    }
    search(ob->right, data);
}

tree *insert()
{
    int data;
    cout << "enter new data" << endl;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }

    tree *temp = new tree(data);
    temp->left = insert();
    temp->right = insert();
    return temp;
}

void print(tree *obj)
{
    if (obj == NULL)
    {
        return;
    }
    cout << obj->data << " ";
    print(obj->left);
    print(obj->right);
}

tree *findminvaluenode(tree *obj)
{
    // if(obj->data =)
    while (obj->left != NULL)
    {
        obj = obj->left;
    }
    return obj;
}

void deleteobj(tree *obj, int data)
{
    if (obj == NULL)
    {
        return;
    }
    if (obj->data > data)
    {
        cout << "d1" << endl;
        deleteobj(obj->left, data);
    }
    else if (obj->data < data)
    {
        deleteobj(obj->right, data);
    }
    else
    {
        if (obj->left == NULL && obj->right == NULL)
        {
            // delete(obj);
            cout << "deleting null";
            // free(obj);
            return;
        }
        else if (obj->left == NULL && obj->right != NULL)
        {
            obj->data = obj->right->data;
            // free(obj->right);
            cout << "deleting right";
            return;
        }
        else if (obj->left != NULL && obj->right == NULL)
        {
            obj->data = obj->left->data;
            cout << "deleting left";
            // free(obj->left);
            return;
        }
        else
        {
            tree *minnode = findminvaluenode(obj->right);
            obj->data = minnode->data;
            cout << "deleting " << minnode->data;
            deleteobj(obj->right, minnode->data);
        }
    }
}

tree *del(tree *obj, int data)
{
    if (obj == NULL)
    {
        return obj;
    }
    if (obj->data > data)
    {
        obj->left = del(obj->left, data);
    }
    else if (obj->data < data)
    {
        obj->right = del(obj->right, data);
    }
    else
    {
        if (obj->left == NULL && obj->right == NULL)
        {
            return NULL;
        }
        else if (obj->left == NULL && obj->right != NULL)
        {
            tree *temp = obj->right;
            // free(obj);
            return temp;
        }
        else if (obj->left != NULL && obj->right == NULL)
        {
            tree *temp = obj->left;
            // free(obj);
            return temp;
        }
        else
        {
            tree *minnode = findminvaluenode(obj->right); // this is the minimum node on left side
            obj->data = minnode->data;
            obj->right = del(obj->right, minnode->data);
        }
    }

    return obj;
}

int main()
{
    tree *obj = NULL;
    obj = new tree(7);
    obj->left = new tree(4);
    obj->left->left = new tree(3);
    obj->left->right = new tree(6);
    obj->left->right->left = new tree(5);
    obj->right = new tree(8);
    obj->right->right = new tree(9);
    // tree *root = insert();
    // print(root);

    print(obj);
    cout << endl;
    del(obj, 7);
    cout << endl;
    print(obj);

    // search(obj, 6);

    return 0;
}