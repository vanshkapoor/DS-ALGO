//Employee.h provided by Dr. Meilin Liu, and you can make minor modifications if //you want.

#ifndef _BinarySearchTree_
#define _BinarySearchTree_

#include <cstdlib>
#include "BinaryTreeNode.h"
#include "Employee.h"

using namespace std;

class BinarySearchTree
{
public:
	BinarySearchTree(); //constructor
	~BinarySearchTree() //destructor
	{
		cout << "deleted";
	}
	bool clear(); // using postorder tree traversal
	bool insert(Employee &emp);
	Employee *search(int k);
	bool remove(int k);
	int BSTsize();
	bool print(); // using inorder tree traversal
	bool save();  // using inorder tree traversal
	BinaryTreeNode *getRoot() const;

private:
	BinaryTreeNode *root;
	int size;
};

#endif
