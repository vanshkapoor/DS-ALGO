#include<iostream>

using namespace std;

class teacher{
    public:
    int no;
    char name[20];

    void display()
    {
        cout<<endl;
        cout<<"no : "<<no<<"name :"<<name;
        cout<<endl;
    }

    int getNo()
    {
        return no;
    }

    int setNo(int n)
    {
        no = n;
    }
};