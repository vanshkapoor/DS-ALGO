#include<iostream>
#include "bnode.h"

using namespace std;

//option2
struct node
{
int data;
struct node *left,*right;
node(int data)
{
    this->data = data;
    left=right=NULL;
};
};


//-------print
void printT(BtreeNode<int>* root)
{
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left){
        cout<<"L"<<root->left->data;
    }
    if(root->right){
        cout<<"R"<<root->right->data;        
    }
    cout<<endl;
    printT(root->left);
    printT(root->right);    
}

BtreeNode<int>* takeinput()
{
    int data;
    cout<<"ENTER ROOT DATA:";
    cin>>data;
    if(data == -1){
        return NULL;
    }
    BtreeNode<int>* root = new BtreeNode<int>(data);
    BtreeNode<int>* lchild = takeinput();
    BtreeNode<int>* rchild = takeinput();
    root->left = lchild;
    root->right = rchild;
    return root;

}






int main()
{
    // BtreeNode<int>* root = new BtreeNode<int>(1);
    // BtreeNode<int>* node1 = new BtreeNode<int>(2);
    // BtreeNode<int>* node2 = new BtreeNode<int>(3);
    // root->left = node1;
    // root->right = node2;
    BtreeNode<int>* root = takeinput();
    printT(root);
    delete root;
    return 0;
}