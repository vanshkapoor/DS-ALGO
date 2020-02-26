#include<iostream>
#include "teacherclass.cpp"

using namespace std;

class student{
    public:
    int sno;
    char name[20];
};


int main()
{
    student s1;
    student *s2 = new student;

    teacher t1;
    t1.no = 4;
    cin>>t1.name;
    t1.display();
    cout<<"age === "<<t1.getNo()<<endl;



    // allocate to dynamicaly created object
    (*s2).sno = 23;
    // OR
    s2 -> sno = 1;


    cout<<s2->sno<<endl;
    cout<<t1.no;
    return 0;
}