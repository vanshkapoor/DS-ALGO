#include <iostream>
#include <string.h>
#include "BinarySearchTree.h"
#include "BinaryTreeNode.h"

using namespace std;

BinarySearchTree::BinarySearchTree()
{
    root = NULL;
};

void printBinaryTree(BinaryTreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    printBinaryTree(root->getLeft());
    root->printPerson();
    printBinaryTree(root->getRight());
}

bool BinarySearchTree::print()
{
    if (root == NULL)
    {
        return false;
    }
    // root->printBinaryTree();
    printBinaryTree(root);

    return true;
}

int BinarySearchTree::BSTsize()
{
    return size;
}

BinaryTreeNode *BinarySearchTree::getRoot() const
{
    return root;
}

Employee searchEmployee(BinaryTreeNode *root, int k)
{
    if (root == NULL || root->getPersonID() == k)
    {
        return root->getPerson();
    }
    if (root->getPersonID() < k)
        return searchEmployee(root->getRight(), k);

    return searchEmployee(root->getLeft(), k);
}

Employee BinarySearchTree ::search(int k)
{
    return searchEmployee(root, k);
}

bool BinarySearchTree ::insert(Employee &emp)
{
    if (root == NULL)
    {
        root = new BinaryTreeNode(emp);
        size = 1;
        return true;
    }
    if (emp.getID() < root->getPersonID())
    {
    }
    // AddinBinaryTree(root,)
}