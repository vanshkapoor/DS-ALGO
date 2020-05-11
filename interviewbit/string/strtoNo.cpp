#include<iostream>
#include<typeinfo>

using namespace std;

int main()
{
    string s = "123";

    int m = stoi(s);
    cout<<m<<endl;
    cout<<typeid(m).name()<<endl;


    string ss = to_string(m);
    cout<<ss<<" "<<typeid('0').name();

    cout<<endl;

    cout<<s[1] - '0';
    cout<<"0";


    return 0;
}