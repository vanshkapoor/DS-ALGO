#include<iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
};
struct node *root=NULL;

void append()
{
    struct node *temp = new struct node;;
    // temp = (struct node *)malloc(sizeof(struct node));

    cout<<"enter data";
    cin>>temp->data;
    temp->next=NULL;

    if(root == NULL)
    {
        root=temp;
    }else{
        struct node *p = root;
        while(p->next!=NULL)
        {
            p = p->next;
        }
        p->next=temp;
    }
}



int main()
{
append();
append();
append();
struct node *p = root->next;
cout<<p->data;
cout<<endl;
cout<<p->next;
cout<<endl;
cout<<p->next->data;
cout<<endl;
cout<<endl;


cout<<root<<"---"<<root->data<<"---"<<root->next<<"---"<<root->next->data;


return 0;
}