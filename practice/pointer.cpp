#include<iostream>
using namespace std;

void square(int &nn)
{
    cout<<"\n &nn = "<<&nn;
    cout<<"nn = "<<nn++;
}

int main()
{
    int i=10;
    int *p = &i;
    cout<<p;
    cout<<endl;
    cout<<*p;
    p = p+1;
    cout<<"*p = "<<*p;
    cout<<endl;

    cout<<"size of : "<<sizeof(p);
    cout<<endl;
    cout<<"size of i :"<<sizeof(i)<<endl;

    int *j;
    j = p;
    cout<<"j:"<<j;

    int *k;
    // k = &p; :ERROR  cannot convert ‘int**’ to ‘int*’ in assignment
    cout<<endl;
    cout<<"k = "<<k<<endl;

    int n = 3;
    cout<<"\n &n in main = \n"<<&n;
    square(n);
    cout<<"\n function value = :"<<n;


    int &m = i;
    cout<<"m = "<<m;


    return 0;
}