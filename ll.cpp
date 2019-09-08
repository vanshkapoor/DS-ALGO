#include <iostream>
#include <malloc.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *root=NULL;

void append()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    cout<<"enter data :";
    cin>>temp->data;
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node *p;
        p=root;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
    }

}
void print()
{
    int c=0;
    struct node *t;
    t=root;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
        c++;
    }
    cout<<c;
}

int length()
{
    int c=0;
    struct node *t;
    t=root;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
        c++;
    }
    return c;
}

void addatbeg()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    cout<<"enter node data to add at beg:";
    cin>>temp->data;
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        temp->next=root;
        root=temp;
    }

}

void revers(int length)
{
    int i,j,temp;
    struct node *p,*q;
    i=0;
    j=length-1;
    p=q=root;
    while(i<j)
    {
        int k=0;
        while(k<j)
        {
            q=q->next;
            k++;
        }
        temp=p->data;
        p->data=q->data;
        q->data=temp;
        i++;
        j--;
        q=root;
        p=p->next;
    }
}
void del(int length)
{
    int pos;
    cout<<"enter position to delete : \t";
    cin>>pos;
    if(pos>length)
    {
        cout<<"not possible";
    }
    else if(pos==1)
    {
        struct node *temp;
        temp=root;
        root=temp->next;
        temp->next=NULL;
        free(temp);
    }
    else
    {
        struct node *q;
        struct node *p=root;
        int i=0;
        while(i<pos-1)
        {
            p=p->next;
            i++;
        }
        q=p->next;
        p->next=q->next;
        q->next=NULL;
        free(q);
    }
}
int main()
{
    int len;
    append();
    append();
    append();
    append();
    append();
    print();
    addatbeg();
    print();
    cout<<"reverse the list: \n";
    len=length();
    //revers(len);
    //print();
    //print();
    del(len);
    print();
    return 0;
}
