#include<iostream>

using namespace std;
int top=-1;
int stack[1000];
void push(int stack[],int n,int size)
{
   if(top == size-1)
   {
    cout<<"full";
   }else{
    top++;
    stack[top] = n;
    cout<<"\ntop = "<<top;
    }  
}

void pop(int stack[],int size)
{
   if(top == -1)
   {
    cout<<"empty";
   }else{
    cout<<"removed = \t"<<stack[top];
    stack[top] = 0;
    top--;       
    cout<<"\ntop = "<<top;	
    }  
}


int main()
{
int n,size;
cout<<"size \n";
cin>>size;
char ch='y';

do{
cout<<"number\n";
cin>>n;

push(stack,n,size);
cout<<"\ntop = "<<top;
cout<<"again?";
cin>>ch;
}while(ch == 'y');


for(int i=0;i<top;i++)
{
  cout<<stack[i]<<"\t";
}

char ch1='y';
do{
pop(stack,size);
cout<<"\ntop = "<<top;
cout<<"again?";
cin>>ch1;
}while(ch1 == 'y');

for(int i=0;i<top;i++)
{
  cout<<stack[i]<<"\t";
}


return 0;
}
