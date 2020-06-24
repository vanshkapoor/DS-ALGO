#include<iostream>

using namespace std;
int f=-1,r=-1;

void add(int q[],int size)
{
int n;
 if(r==size-1)
 {
   cout<<"full";
   return;
 }
 else if(r==-1)
 {
   f=r=0; 
 }
else{
   r++;
 }
cout<<" no to insert :\n";
cin>>n;
q[r] = n;
}

void remove(int q[],int size)
{
 if(f == -1)
 {
  cout<<"empty";
  return;
 }else if(f == r)
 {
  f = r = 0;
 }else{
  cout<<"deleted : "<<q[f];
  f++;
 }


}



int main()
{
int q[1000],size;
char ch='y';

cout<<"size : \t";
cin>>size;

do{
add(q,size);
cout<<"\n again?";
cin>>ch;
}while(ch == 'y');


for(int i=f;i<=r;i++)
  cout<<q[i];

ch='y';
do{
remove(q,size);
cout<<"\n again?";
cin>>ch;
}while(ch == 'y');

for(int i=f;i<=r;i++)
  cout<<q[i];

return 0;
}









