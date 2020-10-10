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
    used=-1;
}

SStack::SStack(const SStack &s)
{
    this->Capacity = s.Capacity;
    this->DynamicStack = new string[s.Capacity];
    for (int i = 0; i < s.Capacity; i++)
    {
        this->DynamicStack[i] = s.DynamicStack[i];
    }
}

void SStack::push()
{
    string s;
    cin >> s;
    if(used>=Capacity-1)
        cout<<"Stack overflow!";
    else
        DynamicStack[++used]=s;
    cout << "Pushing element =" << s << endl;
}

string SStack::pop()
{
    if(used<0) 
        return "Stack is empty.";
    else
    {
        string store;
        store=DynamicStack[used--];
        // cout<<"Element popped = "<< store << endl;
        return store;
    }
}

string SStack::top() const
{
    if(used<0)  
        return "Stack is empty.";
    return DynamicStack[used];
}

bool SStack::isEmpty() const
{
    if(used<0)
        return true;
    else
        return false;
}

int SStack::size() const
{   
    int size=0;
    for(int i=used;i>=0;i--)
        size++;
    return size;
}

int SStack::getCapacity() const
{
    return Capacity;
}

void SStack::print() const
{   
    if(used<0)
    {   
        cout<<"Stack is empty.";
        return;
    }
    for(int i=used;i>=0;i--)
        cout<<DynamicStack[i]<<" ";
    cout<<endl;
}

void check()
{
    cout << "check connection of stack.cpp with main.cpp" << endl;
}

// int main()
// {
//     // THIS CPP FILE WILL BE USED TO :
//     // IMPLEMENT THE SSTACK.h FUNCTIONS
//     // MORE FUNCTIONS WILL ADDED WHICH WILL BE USED BY MAIN.CPP
//     return 0;
// }
