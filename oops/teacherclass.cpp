#include<iostream>

using namespace std;

class teacher{
    private:
    int sno;

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
        if(n < 0){
            return 0;    //So we can check here..thats the use of accessing private members by public fuctions
        }
        no = n;
        return no;
    }
};