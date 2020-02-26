#include<iostream>

using namespace std;

class cnode{
    public:
    int data;
    cnode *next;
    cnode(int data){
        this->data = data;
        next = NULL;
    }
};



// void inorder(struct node* obj)
// {
//     if(obj == NULL){
//         return;
//     }
//     inorder(obj->left);
//     cout<<obj->data<<" ";
//     inorder(obj->right);
// }

// struct node* addtree(){
    
//     int data;
//     cout<<"enter data"<<"\n";
//     cin>>data;
//     struct node *root = new node(data);
//     return root;
// }


int main()
{
    cnode *obj = new cnode(4);
    obj->next = new cnode(3);
    obj->next->next = new cnode(5);

    cout<<obj->data;
    cout<<obj->next->data;
    cout<<obj->next->next->data;

    return 0;
}