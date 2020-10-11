#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "SStack.h"

using namespace std;

SStack::SStack(int cap)
{
    Capacity = cap;
    DynamicStack = new string[cap];
    used = -1;
}

SStack::SStack(const SStack &s)
{
    this->Capacity = s.Capacity;
    this->used = s.used;
    this->DynamicStack = new string[s.Capacity];
    for (int i = 0; i < s.Capacity; i++)
    {
        this->DynamicStack[i] = s.DynamicStack[i];
    }
}

void SStack::push(string name)
{
    if (name != "No value")
    {
        if (used >= Capacity - 1)
            cout << "Stack overflow!";
        else
            DynamicStack[++used] = name;
        return;
    }
    string s;
    cin >> s;
    if (used >= Capacity - 1)
        cout << "Stack overflow!";
    else
        DynamicStack[++used] = s;
    cout << "Pushing element =" << s << endl;
}

string SStack::pop()
{
    if (used < 0)
        return "Stack is empty.";
    else
    {
        string store;
        store = DynamicStack[used--];
        // cout<<"Element popped = "<< store << endl;
        return store;
    }
}

string SStack::top() const
{
    if (used < 0)
        return "Stack is empty.";
    return DynamicStack[used];
}

bool SStack::isEmpty() const
{
    if (used < 0)
        return true;
    else
        return false;
}

int SStack::size() const
{
    int size = 0;
    for (int i = used; i >= 0; i--)
        size++;
    return size;
}

int SStack::getCapacity() const
{
    return Capacity;
}

void SStack::print() const
{
    if (used < 0)
    {
        cout << "Stack is empty.";
        return;
    }
    for (int i = used; i >= 0; i--)
        cout << DynamicStack[i] << " ";
    cout << endl;
}

string SStack::getElement(int i) const
{
    return DynamicStack[i];
}

void check()
{
    cout << "check connection of stack.cpp with main.cpp" << endl;
}

void copystack(SStack &obj)
{
    string str;
    int num = 0;
    cout << "Creating a copy of current stack.." << endl;
    SStack newobj(obj);
    cout << "COPY STACK CREATED SUCCESSFULLY" << endl;
    cout << "ENTER NUMBER OF RECORDS TO INSERT IN NEW STACK" << endl;
    cin >> num;
    while (num > 0)
    {
        cin >> str;
        newobj.push(str);
        num--;
    }
    cout << "------- NEW CONSTRUCTOR STATS ------" << endl
         << endl;
    cout << "CAPACITY:          " << newobj.getCapacity() << endl;
    cout << "USED SPACE:        " << newobj.size() << endl;
    cout << "TOP ELEMENT:       " << newobj.top() << endl;
    cout << "STACK ELEMENTS:    " << endl;
    newobj.print();
    return;
}

bool equals(const SStack &s1, const SStack &s2)
{
    if (s1.size() != s1.size())
    {
        return false;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1.getElement(i) != s2.getElement(i))
        {
            return false;
        }
    }
    return true;
}

void CheckEquals()
{
    char ch = 'y';
    int capacity1, capacity2;
    cout << "CREATING STACK 1 :" << endl;
    cout << "Enter capacity" << endl;
    cin >> capacity1;
    SStack obj1(capacity1);
    cout << "Enter elements for Stack 1" << endl;
    while (ch == 'y')
    {
        string s;
        cout << "Enter a Last name" << endl;
        cin >> s;
        obj1.push(s);
        cout << "Want to enter more? (Enter y)" << endl;
        cin >> ch;
    }
    cout << endl;
    cout << endl;

    ch = 'y';

    cout << "CREATING STACK 2 :" << endl;
    cout << "Enter capacity" << endl;
    cin >> capacity2;
    SStack obj2(capacity2);
    cout << "Enter elements for Stack 2" << endl;
    while (ch == 'y')
    {
        string s;
        cout << "Enter a Last name" << endl;
        cin >> s;
        obj2.push(s);
        cout << "Want to enter more? (Enter y)" << endl;
        cin >> ch;
    }
    cout << endl;
    cout << endl;
    if (equals(obj1, obj2))
    {
        cout << "YES!! THE TWO STACKS ARE EQUAL" << endl;
    }
    else
    {
        cout << "NO!! THE TWO STACKS ARE NOT EQUAL" << endl;
    }
}

SStack operator+(const SStack &s1, const SStack &s2)
{
    int capacity = s1.getCapacity() + s2.getCapacity();
    SStack obj(capacity);

    for (int i = 0; i < s1.size(); i++)
    {
        obj.push(s1.getElement(i));
    }
    for (int i = 0; i < s2.size(); i++)
    {
        obj.push(s2.getElement(i));
    }

    return obj;
}

void unionofstack()
{
    char ch = 'y';
    int capacity1, capacity2;
    cout << "CREATING STACK 1 :" << endl;
    cout << "Enter capacity" << endl;
    cin >> capacity1;
    SStack obj1(capacity1);
    cout << "Enter elements for Stack 1" << endl;
    while (ch == 'y')
    {
        string s;
        cout << "Enter a Last name" << endl;
        cin >> s;
        obj1.push(s);
        cout << "Want to enter more? (Enter y/n)" << endl;
        cin >> ch;
    }
    cout << endl;
    cout << endl;

    ch = 'y';

    cout << "CREATING STACK 2 :" << endl;
    cout << "Enter capacity" << endl;
    cin >> capacity2;
    SStack obj2(capacity2);
    cout << "Enter elements for Stack 2" << endl;
    while (ch == 'y')
    {
        string s;
        cout << "Enter a Last name" << endl;
        cin >> s;
        obj2.push(s);
        cout << "Want to enter more? (Enter y)" << endl;
        cin >> ch;
    }
    cout << endl;
    cout << endl;
    SStack Unionobj = obj1 + obj2;
    Unionobj.print();
}

// int main()
// {
//     // THIS CPP FILE WILL BE USED TO :
//     // IMPLEMENT THE SSTACK.h FUNCTIONS
//     // MORE FUNCTIONS WILL ADDED WHICH WILL BE USED BY MAIN.CPP
//     return 0;
// }
