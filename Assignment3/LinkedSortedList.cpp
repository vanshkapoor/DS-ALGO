#include <iostream>
#include "LinkedSortedList.h"
#include "LinkedNode.h"

using namespace std;

void LinkedSortedList ::check()
{
    cout << "check";
}

void LinkedSortedList ::print() const
{
    cout << "head next" << head->value;
}

bool LinkedSortedList ::insert(string lname)
{
    LinkedNode *temp = new LinkedNode(lname);
    head = temp;
    temp->print();
    cout << endl;
    return true;
}