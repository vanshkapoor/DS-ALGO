#include <iostream>
#include "LinkedSortedList.h"
#include "LinkedSortedList.cpp"

using namespace std;

int main()
{
    LinkedSortedList *obj = new LinkedSortedList();
    obj->check();
    obj->insert("vansh");
    obj->print();
    return 0;
}