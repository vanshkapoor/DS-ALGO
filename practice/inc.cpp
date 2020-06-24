#include<iostream>

using namespace std;

int main()
{
    int a = 10;
    int b=10;
    int d=10;
    cout<<"a++ = "<<a++<<endl;
    cout<<"++a = "<<++a<<endl;

    cout<<"b++ + 5 + ++b = "<<b++ + 5 + ++b<<endl;
    int c = d++;
    cout<<c;


    return 0;
}