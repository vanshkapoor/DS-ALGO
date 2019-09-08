#include<iostream>
#include<malloc.h>

using namespace std;

struct node{
  int data;
  struct node *next;
};

struct node *root = NULL;


void append()
{  
  int n;
  cout<<"enter\t";
  cin>>n;
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));

  temp->data = n;
  temp->next = NULL;

  if(root == NULL)
  {
    root = temp;
  }else{
    struct node *p;
    p=root;
    while(p->next!=NULL)
    {
      //cout<<p->data<<"->";
      p=p->next;
    }
      p->next = temp;    
  }
}

void addatbeg()
{
  int n;
  cout<<"enter\t";
  cin>>n;
  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));
  temp->data = n;
  temp->next = NULL;

  if(root == NULL)
  {
    root = temp;
  }else{
    temp->next = root;
    root = temp;
  }  
}

void reverse()
{
  int i=0,temp;
  int j=2;
  struct node *p,*q;
  p=q=root;
  while(i<j)
  {

   int k=0;
   while(k<j)
   {
    q=q->next;
    k++;
   }
   temp    = p->data;
   p->data = q->data;
   q->data = temp;
   p=p->next;
   q=root; 
   i++;
   j--;
  } 
}



void del()
{
  int pos;
  struct node *p;
  cout<<"position to delete";
  cin>>pos;
  if(pos == 1)
  {
   root = root->next;
  }else{
    struct node *p,*q;
    p=root;
    int i=1;
    while(i<pos)
    {
     p = p->next;
     i++;
    }
    q       = p->next;
    p->next = q->next;
    q->next = NULL;
    free(q);
  }
}

void print()
{
  int c=0;
  struct node *pm;
  pm=root;
  while(pm!=NULL)
  {
    cout<<pm->data<<"->";
    pm=pm->next;
    c++;
  } 
  cout<<"\n length = "<<c;
}


int main()
{

append();
append();
append();
print();
reverse();
print();
addatbeg();
print();
addatbeg();
print();
del();
print();

return 0;
}
