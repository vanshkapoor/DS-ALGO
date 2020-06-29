#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
node *root = NULL;

node *append(node *obj)
{
    int data;
    cout << "enter data" << endl;
    cin >> data;
    node *temp = new node(data);

    if (obj == NULL)
    {
        obj = temp;
        cout << obj->data << endl;
        return obj;
    }
    else
    {
        node *p = obj;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;

        return p;
    }
}

void reverse(node *obj)
{
    node *prev = NULL;
    node *curr = obj;
    node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    obj = prev;
}

void print(node *obj)
{
    node *p = obj;
    while (p != NULL)
    {
        cout << p->data << "->";
        p = p->next;
    }
}

int main()
{
    // cout << "p = " << p << endl;
    root = append(root);
    node *p = root;
    cout << "p = " << p << endl;
    cout << root << " " << root->data << endl;
    root = append(root);
    cout << "p = " << p << endl;
    cout << root << " " << root->data << endl;
    root = append(root);
    cout << "p = " << p << endl;
    cout << root << " " << root->data << endl;
    root = append(root);
    cout << root << " " << root->data << endl;
    // cout << root->next->data;
    print(p);
    // reverse(root);
    // print(root);

    return 0;
}