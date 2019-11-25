#include<iostream>
using namespace std;

int main()
{
    int a[3] = {1,2,3};
    int *p = a;
    cout<<a;
    cout<<endl;
    cout<<*p;

    // a = a+3;
    cout<<endl;
    p = p+1;
    cout<<*p;
    cout<<endl;

    cout<<&a;
    cout<<endl;
    cout<<&p;

    return 0;
}