#include <iostream>
// #include "SStack.h"
#include "SStack.cpp"

using namespace std;

int main()
{
    SStack obj(100);
a:
    cout << "------------------------------------Menu--------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "(1) INSERT AN ELEMENT TO STACK" << endl;
    cout << "(2) POP AN ELEMENT FROM STACK." << endl;
    cout << "(3) TOP MOST ELEMENT OF STACK." << endl;
    cout << "(4) CHECK IS STACK IS EMPTY" << endl;
    cout << "(5) WHAT IS THE NUMBER OF ELEMENTS STORED IN STACK" << endl;
    cout << "(6) CAPACITY OF STACK" << endl;
    cout << "(7) PRINT THE STACK" << endl;
    cout << "PLEASE ENTER YOUR CHOICE" << endl;
    int choice = 0;
    cin >> choice;

    switch (choice)
    {
    case 1:
        obj.push();
        break;
    case 2:
        cout<<"Element popped = "<< obj.pop() << endl;
        break;
    case 3:
        cout<<"Top of the stack = "<< obj.top() << endl;
        break;
    case 4:
        if(obj.isEmpty()==true)
            cout<<"Stack is empty." << endl;
        else
            cout<<"Stack is not empty." << endl;
        break;
    case 5:
        cout<<"Number of elements stored in the stack are " << obj.size() <<endl;
        break;
    case 6:
        cout<<"Capacity of the stack is " << obj.getCapacity() << endl;
        break;
    case 7:
        obj.print();
        break;
    default:
        cout << "Wrong Choice" << endl;
        exit(3000);
        break;
    }
    goto a;
    return 0;
}