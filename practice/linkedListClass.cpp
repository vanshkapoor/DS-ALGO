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

void append(node *obj)
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

    obj = root;
    // cout<<obj->data;
    
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

bool detectLoop(node *p)
{
    node* arr[100];
    // p = root;
    int i=0;
    while(p != NULL)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i] == p)
            {
                return true;
            }
        }
        arr[i] = p;
        i++;
        p = p->next;        
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
    node *one = root;
    append(one);
    // print();    

    append(one);
    append(one);

    // check()

    print();

    // addatbeg();
    print();
    cout<<endl;
    cout<<"root = "<<root;    
    cout<<"root add = "<<&root;    
    // printd(root);
    cout<<endl;
    printd(one);
    // cout<<endl;
    // print();

    return 0;
}