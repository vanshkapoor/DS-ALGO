#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void print(node *obj)
{
    if (obj == NULL)
    {
        return;
    }
    cout << obj->data << " - ";
    print(obj->left);
    print(obj->right);
}

int lmin = 0;
int lmax = 0;

void findMinMax(node *obj, int l)
{
    if (obj == NULL)
    {
        return;
    }
    lmin = min(lmin, l);
    lmax = max(lmax, l);
    findMinMax(obj->left, l - 1);  //if node moves away (left side from root) then minus
    findMinMax(obj->right, l + 1); //if node moves close (roots right side) than plus
}

void printNode(node *obj, int line, int l)
{
    if (obj == NULL)
    {
        return;
    }
    if (line == l)
    {
        cout << obj->data << " ";
        // return;   //DO THIS TO PRINT """TOP VIEW"""
    }
    printNode(obj->left, line, l - 1);
    printNode(obj->right, line, l + 1);
}

void verti_traverse(node *obj)
{
    if (obj == NULL)
    {
        return;
    }

    for (int i = lmin; i <= lmax; i++)
    {
        printNode(obj, i, 0);
        cout << endl;
    }
}

int main()
{
    node *obj = new node(1);
    obj->left = new node(2);
    obj->left->left = new node(4);
    obj->left->right = new node(5);
    obj->right = new node(3);
    obj->right->left = new node(6);
    obj->right->right = new node(7);
    obj->right->right->right = new node(9);
    obj->right->left->right = new node(8);
    findMinMax(obj, 0);
    cout << lmin << endl;
    cout << lmax << endl;
    verti_traverse(obj);
    cout << endl;
    print(obj);

    return 0;
}