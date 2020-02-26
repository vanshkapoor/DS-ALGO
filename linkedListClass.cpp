#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

node *root = NULL;

void append()
{
    int data;
    cout<<"enter data";
    cin>>data;
    node *temp = new node(data);

    if(root == NULL)
    {
        root = temp;
    }else{
        node *p = root;
        while(p->next!=NULL)
        {   
            p=p->next;
        }
        p->next = temp;
    }
}

void addatbeg()
{
    int data;
    cout<<"enter data";
    cin>>data;
    node *temp = new node(data);

    if(root == NULL)
    {
        root = temp;
    }else{
        temp->next = root;
        root = temp; 
    }
}

void print()
{
    node *p = root;
    while(p!=NULL)
    {   
        cout<<p->data<<"--";
        p=p->next;
    }
}

void printd(node *p){

    while(p!=NULL)
    {   
        cout<<p->data++<<"--";
        p=p->next;
    }
}


int main()
{
    append();
    // print();

    append();
    append();

    print();

    addatbeg();
    print();
    cout<<endl;
    cout<<"root = "<<root;    
    cout<<"root add = "<<&root;    
    printd(root);
    printd(root);

    return 0;
}