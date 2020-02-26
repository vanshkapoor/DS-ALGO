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

class cnode{
    public:
    int data;
    cnode *left;
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
    obj->data=obj->data + 1;
    inorder(obj->right);
}

struct node* addtree(){
    
    int data;
    cout<<"enter data"<<"\n";
    cin>>data;
    struct node *root = new node(data);
    return root;
}


int main()
{
    // struct node *root = new node(4);
    // root->left = new node(2);
    // root->right = new node(1);
    // root->left->left = new node(5);
    char ch;
    struct node* root;
    do
    {
    root = addtree();
    root->left = addtree();
    root->right = addtree();
    cout<<"again ? :";
    cin>>ch;
    } while (ch == 'y');
    
    inorder(root);
    cout<<endl;
    inorder(root);

    return 0;
}