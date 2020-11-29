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
