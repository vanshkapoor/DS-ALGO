#include<iostream>

using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};


// struct node* object(int data)
// {
//     struct node* newnode = new struct node();
//     // (struct node*)malloc(sizeof(struct node))
//     newnode->data = data;
//     newnode->left = NULL;
//     newnode->right=NULL;
//     return newnode;
// }

void inorder(struct node* obj)
{
    if(obj == NULL){
        return;
    }
    inorder(obj->left);
    cout<<obj->data<<" ";
    inorder(obj->right);
}

// void addtree(struct node* obj){
    
// }


int main()
{
    struct node *root = new node(4);
    root->left = new node(2);
    root->right = new node(1);
    root->left->left = new node(5);
    // addtree(root);
    inorder(root);
    return 0;
}