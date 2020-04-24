#include<iostream>

using namespace std;

int bst(int h)
{
    if(h <=1)
    {
        return 1;
    }

    int x = bst(h-1);
    int y = bst(h-2);

    int ans = x*x + 2*x*y;
    return ans;
}


int main()
{
    int h;
    cout<<"h : ";
    cin>>h;
    cout<<endl;
    
    cout<<bst(h);

    return 0;
}