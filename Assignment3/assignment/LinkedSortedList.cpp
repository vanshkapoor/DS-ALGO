#include <iostream>
#include "LinkedSortedList.h"
#include "LinkedNode.h"

using namespace std;

void LinkedSortedList ::clear()
{
    cout << "CLEARED LINKEDLIST" << endl;
    delete head;
}

void LinkedSortedList ::print() const
{
    // cout << "head next" << head->value;
    LinkedNode *p = head;

    while (p != NULL)
    {
        cout << p->value << endl;
        p = p->next;
    }
    cout << "size = " << nodeCount;
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

int LinkedSortedList ::size() const
{
    return nodeCount;
}

bool LinkedSortedList ::getlast(string &val)
{
    LinkedNode *node = head;
    LinkedNode *p = head;
    if (node == NULL)
    {
        return false;
    }
    if (node->next == NULL)
    {
        head = NULL;
        val = node->value;
        nodeCount = 0;
        return true;
    }
    while (node->next != NULL)
    {
        /* code */
        p = node;
        node = node->next;
    }
    val = p->next->value;
    p->next = NULL;
    nodeCount -= 1;
    return true;
}

bool LinkedSortedList ::remove_nth_element_from_end(string &returnvalue, int n)
{
    if (n > nodeCount)
    {
        return false;
    }

    else if (n == nodeCount)
    {

        returnvalue = head->value;
        nodeCount--;
        head = head->next;

        return true;
    }
    else
    {

        int diff = nodeCount - n;
        LinkedNode *p = NULL;
        LinkedNode *c = head;
        for (int i = 0; i < diff; i++)
        {
            p = c;
            c = c->next;
            returnvalue = c->value;
        }
        p->next = c->next;
        nodeCount--;
        return true;
    }
}

LinkedNode *MergeLinkedSortedList(LinkedNode *head1, LinkedNode *head2)
{
    if (!head1)
        return head2;
    if (!head2)
        return head1;

    if (head1->value < head2->value)
    {
        head1->next = MergeLinkedSortedList(head1->next, head2);
        return head1;
    }
    else
    {
        head2->next = MergeLinkedSortedList(head1, head2->next);
        return head2;
    }
}
