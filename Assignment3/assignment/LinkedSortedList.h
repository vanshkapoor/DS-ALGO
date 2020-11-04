//LinkedSortedList.h

//Definition of a sorted linked list, Provided by Meilin Liu, Fall 2020

//If needed, you can make minor modifications to this LinkedSortedList ADT.

#ifndef _LinkedSortedListClass_
#define _LinkedSortedListClass_

#include "LinkedNode.h"

class LinkedSortedList
{

private:
	// Your private data members go here
	LinkedNode *head;
	int nodeCount;

public:
	// Constructor
	LinkedSortedList()
	{
		head = NULL;
		nodeCount = 0;
	}

	// Destructor
	~LinkedSortedList()
	{
		delete head;
	}

	// Return the number of the elements in the sorted linked list
	int size() const;

	// Clear the list.  Free any dynamic storage.
	void clear();

	//Insert a last name into the sorted linked list (in non-descreasing order)
	//in the right position according to string value so that
	//the linked list is still a correctly sorted linked list.
	//Return true if successful, false if failure.
	bool insert(string lname);

	// Get AND DELETE the nth element of the sorted linked list from the end, placing it into the
	// return variable "returnvalue".  If the list has less than n elements, return false,
	// otherwise return true after successfully deleting the nth element from the end (i.e., the nth node from the end).
	bool remove_nth_element_from_end(string &returnvalue, int n);

	// Get AND DELETE the last element of the sorted linked list, placing it into the
	// return variable "lastvalue".  If the list is empty, return false, otherwise
	// return true after successfully deleting the last element (i.e., the last node).
	bool getlast(string &lastvalue);

	// Print out the entire sorted linked list to the screen.  Print an appropriate message
	// if the list is empty.  Note:  the "const" keyword indicates that
	// this function cannot change the contents of the sorted linked list.
	void print() const;

	LinkedNode *gethead()
	{
		return head;
	}
	void updateHead(LinkedNode *res)
	{
		head = res;
	}
};

//Merge two sorted linked list into one sorted linked list, and return the head of the merged sorted linked list.
LinkedNode *MergeLinkedSortedList(LinkedNode *head1, LinkedNode *head2);

#endif
