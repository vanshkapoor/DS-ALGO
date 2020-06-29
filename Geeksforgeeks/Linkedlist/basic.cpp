#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *next;
    node()
    {
        next = NULL;
    }
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

int main()
{
    struct node *obj = new struct node(4);
    cout << obj->data;
    obj->next = new struct node(5);
    obj->next->next = new struct node(6);

    cout << obj->next->data << " " << obj->next->next->data;

    struct node *ptr = NULL;
    ptr = new struct node(1);
    cout << ptr->data;

    // // obj->next = new struct node(1);
    // // obj->next->next = new struct node(2);
    // // obj->next->next->next = new struct node(3);

    // cout << obj->next->data;

    return 0;
}