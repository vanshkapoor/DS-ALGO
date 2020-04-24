#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string A;
    // getline(cin,A);
    cin>>A;
    for(const  auto& c : A )
    {
        cout<<c;
    }

    cout<<endl;
    int ab = 'A';
    cout<<ab<<endl;
    cout<<12+'a';

    return 0;
}