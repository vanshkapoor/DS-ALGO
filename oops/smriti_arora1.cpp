// WAP to hold details of 10 employees, view topper also a specific dtudent based on roll no
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;

class Employee
{
private:
    char name[25];
    int marks[5];
    int rno;
    int sum;

public:
    void getDetail(int rno, Employee obj[10]);
    void getDetails();
    int getRollNo();
    // int getTopper();
    // void CreateEmployee(Employee obj);
    void CreateEmp()
    {
        int summ = 0;
        cout << "Rno = ";
        cin >> rno;
        cout << "name = ";
        // cin.getline(name, 25);
        cin >> name;
        cout << "marks = ";
        for (int j = 0; j < 5; j++)
        {
            cin >> marks[j];
            summ += marks[j];
        }
        sum = summ;
        // cin >> sum;
    }
};

void Employee::getDetails()
{
    cout << "name : " << name << endl;
    cout << "rno : " << rno << endl;
    for (int j = 0; j < 5; j++)
    {
        cout << "marks" << j << " : " << marks[j] << endl;
    }
    cout << "sum : " << sum;
}

int Employee::getRollNo()
{
    return rno;
}

void getDetail(int rno, Employee obj[10])
{
    for (int i = 0; i < 10; i++)
    {
        if (obj[i].getRollNo() == rno)
        {
            obj[i].getDetails();
        }
    }
}

int main()
{
    Employee obj[3];

    for (int i = 0; i < 3; i++)
    {
        obj[i].CreateEmp();
    }

    for (int i = 0; i < 3; i++)
    {
        obj[i].getDetails();
    }

    getDetail(2, obj);

    return 0;
}