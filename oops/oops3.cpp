#include<iostream>

using namespace std;

int main()
{
    int i=5;
    int &k = i;
    cout<<"k = "<<k<<"&k = "<<&k<<endl;
    cout<<&i;

    return 0;
}