#include <iostream>

using namespace std;

class A
{
public:
    virtual void fun(int x)
    {
        cout << "A =>" << x;
    }
};

class B : public A
{
public:
    void fun(int x)
    {
        cout << "B =>" << x;
    }
};

int main()
{
    A *obj = new B;
    obj->fun(2);

    return 0;
}