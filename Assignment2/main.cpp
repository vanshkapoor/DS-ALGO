#include <iostream>
#include <fstream>
#include "SStack.cpp"

using namespace std;

bool readfile(SStack &obj, int capacity, int num)
{
    int cnt = 0;
    fstream file, file2;
    string lastname;
    string filename = "all.last.txt";
    file.open(filename.c_str());
    file2.open(filename.c_str());
    cout << endl;
    cout << endl;
    cout << endl;
    while (file >> lastname)
    {
        cnt++;
    }
    if (num > cnt)
    {
        cout << "TOTAL NAMES IN OUR DB =>" << cnt << endl;
        cout << "Enter valid size less than DB records." << endl;
        file.close();
        return 0;
    }
    file.close();

    cout << "------ DATA BASE RECORDS  ----" << endl;
    while (file2 >> lastname && num > 0)
    {
        cout << lastname << endl;
        obj.push(lastname);
        num--;
    }
    cout << "TOTAL NAMES IN OUR DB =>" << cnt << endl
         << endl;
    file2.close();

    return 1;
}

int main()
{
    int num, capacity;
b:
    cout << "Enter Capacity of stack(more than 100)" << endl;
    cin >> capacity;
    cout << endl;
    if (capacity < 100)
    {
        goto b;
    }
    SStack obj(capacity);
c:
    cout << "Enter number of records to read from file(less than capacity)" << endl;
    cin >> num;
    if (num > capacity)
    {
        goto c;
    }

    if (readfile(obj, capacity, num) == 0)
    {
        goto c;
    }

a:
    cout << "-------------------OPERATIONS----------------" << endl;
    cout << "(1) INSERT AN ELEMENT TO STACK" << endl;
    cout << "(2) POP AN ELEMENT FROM STACK." << endl;
    cout << "(3) TOP MOST ELEMENT OF STACK." << endl;
    cout << "(4) CHECK IS STACK IS EMPTY" << endl;
    cout << "(5) NUMBER OF ELEMENTS STORED IN STACK" << endl;
    cout << "(6) CAPACITY OF STACK" << endl;
    cout << "(7) PRINT THE STACK" << endl;
    cout << "(8) TEST COPY CONTRUCTOR" << endl;
    cout << "(9) TEST EQUALITY OF STACKS" << endl;
    cout << "(10) CREATE UNION OF TWO STACKS" << endl;
    cout << "PLEASE ENTER YOUR CHOICE" << endl;
    int choice = 0;
    cin >> choice;

    switch (choice)
    {
    case 1:
        obj.push("No value");
        cout << endl;
        break;
    case 2:
        cout << "Element popped = " << obj.pop() << endl;
        cout << endl;
        break;
    case 3:
        cout << "Top of the stack = " << obj.top() << endl;
        cout << endl;
        break;
    case 4:
        if (obj.isEmpty() == true)
            cout << "Stack is empty." << endl;
        else
            cout << "Stack is not empty." << endl;
        cout << endl;
        break;
    case 5:
        cout << "Number of elements stored in the stack are " << obj.size() << endl;
        cout << endl;
        break;
    case 6:
        cout << "Capacity of the stack is " << obj.getCapacity() << endl;
        cout << endl;
        break;
    case 7:
        obj.print();
        cout << endl;
        cout << endl;
        cout << endl;
        break;
    case 8:
        copystack(obj);
        cout << endl;
        break;
    case 9:
        CheckEquals();
        cout << endl;
        break;
    case 10:
        unionofstack();
        cout << endl;
        break;
    default:
        cout << "Wrong Choice" << endl;
        exit(3000);
        break;
    }
    goto a;
    return 0;
}