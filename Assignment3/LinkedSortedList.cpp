#include <iostream>
#include "LinkedSortedList.h"
#include "LinkedNode.h"

using namespace std;

void LinkedSortedList ::check()
{
    cout << "check" << endl;
}

void LinkedSortedList ::print() const
{
    // cout << "head next" << head->value;
    LinkedNode *p = head;

    while (p != NULL)
    {
        cout << p->value << "(" << p->value.length() << ")"
             << " - ";
        p = p->next;
    }
    cout << nodeCount;
}

bool LinkedSortedList ::insert(string lname)
{
    LinkedNode *temp = new LinkedNode(lname);

    if (head == NULL)
    {
        head = temp;
        nodeCount = 1;
    }
    else
    {
        LinkedNode *p = head;
        if (p->value > temp->value)
        {
            temp->next = p;
            head = temp;
            nodeCount += 1;
            return true;
        }
        else
        {
            while (p->value < temp->value)
            {
                if (p->next == NULL)
                {
                    p->next = temp;
                    nodeCount += 1;
                    return true;
                }
                else if (p->next->value > temp->value)
                {
                    // add temp at p->next
                    temp->next = p->next;
                    p->next = temp;
                    nodeCount += 1;
                    return true;
                }

                p = p->next;
            }
            return false;
        }
    }

    return false;
}