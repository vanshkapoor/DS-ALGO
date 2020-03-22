#include<iostream>
#include "student.cpp"


using namespace std;

int main()
{
    char name[] = "vansh";
    student s1(20,name);

    s1.display();

    name[1] = 'B';
    student s2(24,name);
    s2.display();

    s1.display();


    char *nam = name;
    cout<<name<<" &name = "<<&name<<endl;
    cout<<nam<<" &nam = "<<&nam<<endl;

    

    return 0;
}