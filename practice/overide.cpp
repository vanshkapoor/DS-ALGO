#include <iostream>

using namespace std;

class A
{
public:
    virtual void f1()
    {
        cout << "F1 from A";
    }
    void f2() {}
};

class B : public A
{
public:
    void f1()
    {
        cout << "F1 from B";
    }
    // void f2()
    // {

    // }
};

int main()
{
    B obj;
    obj.f1();

    // method 2

    A *ab;
    B ob;
    ab = &ob;
    ab->f1();

    return 0;
}