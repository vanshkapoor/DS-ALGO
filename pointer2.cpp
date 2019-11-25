// character pointer
#include<iostream>

using namespace std;

int main()
{
    int arr[] = {1,2,3};
    char a[] = "vansh";
    cout<<a;
    cout<<arr;

    char *c = a;
    // char *c = &a[0];
    cout<<c;

    cout<<endl;
    char c1 = 'a';
    char *pc = &c1;
    cout<<"c1 =="<<&c1;
    cout<<"pc =="<<pc;

    // important cases
    char str[] = "bdkjf";
    // char* pstr = "dgvqhd";  //dont use this

    cout<<endl;
    char v = 'v';
    char *pv = &v;
    cout<<"v = "<<v<<endl<<endl;
    cout<<"&v = "<<&v<<endl;
    cout<<"pv = "<<pv<<endl;
    cout<<"&pv = "<<&pv<<endl;

    return 0;
}