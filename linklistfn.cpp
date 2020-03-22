#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node *next;
};

void append(node *obj, int data)
{

    node *temp = new node;
    temp->data=data;
    temp->next=NULL;

    if(obj == NULL)
    {
        obj=temp;        
    }else{
        node *p = obj;
        while(p->next != NULL)
        {            
            p=p->next;
        }
        p->next = temp;;
    }
}


void check(node *p)
{
    node *obj = p;

    node *temp = new node;
    temp->data=400;
    temp->next = NULL;

    while(obj->next != NULL)
    {
        cout<<obj->data;
        obj = obj->next;
    }
    obj->next = temp;
    cout<<obj->next->data;

    // p->data = p->data +10;
    // cout<<p->data;
}

int main()
{
    node *root = NULL;

    cout<<"root : "<<root<<endl;

    node *temp = new node;
    temp->data=10;
    temp->next = NULL;

    root = temp;

    cout<<"new root : "<<root<<endl;
    cout<<"temp : "<<temp<<endl;
    cout<<"&root = "<<&root<<endl;
    cout<<"root data = "<<root->data<<endl;

    check(root);
    cout<<endl;
    // cout<<"root next data = "<<root->next->data<<endl;

    while(root != NULL)
    {
        cout<<root->data;
        root = root->next;
    }

    // append(root,10);
    // append(root,20);
    // append(root,30);
    // append(root,40);

    // node *p = root;
    // while(p->next != NULL)
    // {
    //     cout<<p->data<< ":";             
    //     p=p->next;
    // }

    return 0;
}
