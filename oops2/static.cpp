#include<iostream>

using namespace std;

class student
{
    public:
    int rno;
    int age;

    static int Totalstudents; //static members do not depend on the object but it does on the class

    student()
    {
        Totalstudents++;
    }

};

int student::Totalstudents = 0;   //static member initialised with the name of the class not the object


int main()
{
    student s1;
    student s2;
    student s3;


    cout<<student::Totalstudents<<endl;


    cout<<"no error but should not be done"<<s1.Totalstudents<<endl;


    cout<<student::Totalstudents<<endl;

    return 0;
}