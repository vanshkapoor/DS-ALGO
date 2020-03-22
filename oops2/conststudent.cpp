#include<iostream>

using namespace std;

class student
{
    public:
    int age;
    const int rno;
    int &x;

    student(int r , int age) : rno(r), age(age), x(this->age)
    {
        // rno = r;
    }

};