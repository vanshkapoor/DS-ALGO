#include <iostream>
#include <bits/stdc++.h>
// #include <unordered_set>

using namespace std;

class node
{
public:
    int data;
    node *next;
};

void append(struct node *head)
{
    struct node *temp = new node;
    cout << "enter data";
    cin >> temp->data;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
}

void print(struct node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}
// void loop_detection(struct node *head)
// {
//     unordered_set<int> s;
//     while (head != NULL)
//     {
//         if (s.find(head) == s.end())
//         {
//             s.insert(head);
//         }
//         else
//         {
//             cout << "loop found";
//             return;
//         }

//         head = head->next;
//     }
// }

int check(int a)
{
    if (a < 5)
    {
        return 0;
    }
    return 1;
}

int main()
{
    struct node *root = NULL;
    struct node *temp = new node;
    temp->data = 2;
    temp->next = NULL;
    root = temp;
    append(root);
    append(root);
    append(root);
    print(root);
    cout << root->data;
    cout << endl;
    if (check(6))
    {
        cout << "true";
    }

    return 0;
}
