#include <iostream>
#include "LinkedSortedList.h"
#include "LinkedSortedList.cpp"

using namespace std;

int main()
{
    string lastval;
    LinkedSortedList *obj = new LinkedSortedList();
    obj->check();
    obj->insert("dbca");
    obj->insert("abcd");
    obj->insert("acbd");
    obj->insert("vansh");
    obj->getlast(lastval);
    obj->print();
    cout << endl;
    obj->getlast(lastval);
    obj->print();
    cout << endl;
    obj->getlast(lastval);
    obj->print();
    cout << endl;
    obj->getlast(lastval);
    obj->print();

    return 0;
}