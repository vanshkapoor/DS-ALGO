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
    cout << "pushing element =" << s << endl;
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
