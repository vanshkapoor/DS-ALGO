#ifndef _BinaryTreeNode_
#define _BinaryTreeNode_
#include <iostream>
#include <cstdlib>
#include "Employee.h"

using namespace std;

class BinaryTreeNode
{
public:
	Employee person;
	BinaryTreeNode *left;
	BinaryTreeNode *right;

public:
	BinaryTreeNode(Employee &newEmployee, BinaryTreeNode *rightptr = NULL, BinaryTreeNode *leftptr = NULL)
	{
		person = newEmployee;
		left=leftptr;
		right=rightptr;
	}

	BinaryTreeNode *getLeft()
	{
		return left;
	}

	BinaryTreeNode *getRight()
	{
		return right;
	}

	void printPerson()
	{
		person.printPersonObj();
	}
	int getPersonID()
	{
		return person.getID();
	}
	Employee getPerson()
	{
		return person;
	}
	// Employee searchEmployee()

	//~BinaryTreeNode();
};
#endif
