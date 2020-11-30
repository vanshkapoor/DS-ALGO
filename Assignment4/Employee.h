
#ifndef _Employee_
#define _Employee_

#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include<stdio.h>

using namespace std;
class Employee
{
private:
	int ID;
	string lastname;
	string firstname;

public:
	Employee() {}
	Employee(int IdNum, string last, string first)
	{
		ID = IdNum;
		firstname = first;
		lastname = last;
	}
	Employee(const Employee &person)
	{
		ID = person.ID;
		lastname = person.lastname;
		firstname = person.lastname;
	}
	// ~Employee()
	// {
	// 	cout << "Object is being deleted" << endl;
	// }
	void setFirstName(string first);
	void setLastName(string last);
	void setID(int IdNum);
	int getID() const;
	string getFirstName() const;
	string getLastName() const;
	void printPersonObj();
	friend ostream &operator<<(ostream &outs, Employee &person);
	friend istream &operator>>(istream &ins, Employee &person);
};

#endif
