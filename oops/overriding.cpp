// CPP program to illustrate
// Function Overriding
#include <iostream>
using namespace std;

class BaseClass
{
public:
    virtual void Display()
    {
        cout << "\nThis is Display() method"
                " of BaseClass";
    }
    void Show()
    {
        cout << "\nThis is Show() method "
                "of BaseClass";
    }
};

class DerivedClass : public BaseClass
{
public:
    // Overriding method - new working of
    // base class's display method
    void Display()
    {
        cout << "\nThis is Display() method"
                " of DerivedClass";
    }
};

// Driver code
int main()
{
    BaseClass *b;
    DerivedClass dr;
    b = &dr;
    b->Display();
    // BaseClass &bs = dr;
    // bs.Display();
    dr.Display();
}
