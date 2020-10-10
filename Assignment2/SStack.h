#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

class SStack
{
private:
    int Capacity;         //Max size of stack
    string *DynamicStack; //dynamic array
    int used;             //items stored
public:
    SStack(int cap);
    SStack(const SStack &s);
    // ~SStack();

    void push(string name);
    string pop();
    string top() const;
    bool isEmpty() const;
    void print() const;
    int size() const;
    int getCapacity() const;
};

// TO DO FUNCTIONS AT END
// SStack operator+(const SStack &s1, const SStack &s2);
// bool equals(const SStack &s1, const SStack &s2);
