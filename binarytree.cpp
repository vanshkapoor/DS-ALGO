#include<iostream>

using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* object(int data)
{
    struct node* newnode = new struct node();
    // (struct node*)malloc(sizeof(struct node))
    newnode->data = data;
    newnode->left = NULL;
    newnode->right=NULL;
    return newnode;
}



int main()
{
    struct node *root = object(4);
    root->left = object(2);
    root->right = object(1);
    root->left->left = object(5);

    cout<<root->data;
    cout<<endl;
    cout<<root->left->data;
    return 0;
}