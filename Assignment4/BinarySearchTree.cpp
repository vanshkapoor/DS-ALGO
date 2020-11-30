#include <iostream>
#include <string.h>
#include "BinarySearchTree.h"
#include "BinaryTreeNode.h"

using namespace std;

BinarySearchTree::BinarySearchTree()
{
    root = NULL;
}

void printBinaryTree(BinaryTreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    printBinaryTree(root->getLeft());
    root->printPerson();
    cout << endl;
    printBinaryTree(root->getRight());
}

bool BinarySearchTree::print()
{
    if (root == NULL)
    { //cout<<"print";
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

Employee searchEmployee(BinaryTreeNode *root, int k, int &cnt, int size)
{
    if (root == NULL)
    {
        cout << "NOT FOUND";
        Employee obj;
        return obj;
    }
    if (root->getPersonID() == k)
    {
        cout << endl;
        cout << "Total items searched :" << cnt << endl;
        if (cnt != size)
        {
            cout << size;
            root->printPerson();
            return root->getPerson();
        }
        else
        {
            cout << "NOT FOUND";
            Employee obj;
            return obj;
        }
    }
    if (root->getPersonID() < k)
        return searchEmployee(root->getRight(), k, ++cnt, size);

    return searchEmployee(root->getLeft(), k, ++cnt, size);
}

Employee BinarySearchTree ::search(int k)
{
    int cnt = 0;
    return searchEmployee(root, k, cnt, size);
}

BinaryTreeNode *insert2(BinaryTreeNode *node, Employee &emp)
{
    if (node == NULL)
    {
        // cout << "Here1";
        return new BinaryTreeNode(emp);
    }
    if (emp.getID() < node->getPersonID())
    {
        // cout << "here2";
        node->left = insert2(node->left, emp);
    }
    else if (emp.getID() > node->getPersonID())
    {
        // cout << "here3";
        node->right = insert2(node->right, emp);
    }

    return node;
}

bool BinarySearchTree ::insert(Employee &emp)
{

    root = insert2(root, emp);
    size += 1;
    return true;
    // AddinBinaryTree(root,)
}

BinaryTreeNode *helperrem(BinaryTreeNode *node)
{
    BinaryTreeNode *current = node;

    while (current && current->left != NULL)
        current = current->left;

    return current;
}
BinaryTreeNode *remove2(BinaryTreeNode *root, int k, bool &res)
{
    if (root == NULL)
        return root;

    if (k < root->getPersonID())
        root->left = remove2(root->left, k, res);

    else if (k > root->getPersonID())
        root->right = remove2(root->right, k, res);

    else
    {
        res = true;
        if (root->left == NULL)
        {
            BinaryTreeNode *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            BinaryTreeNode *temp = root->left;
            free(root);
            return temp;
        }

        BinaryTreeNode *temp = helperrem(root->right);

        root->person = temp->getPerson();

        root->right = remove2(root->right, temp->getPersonID(), res);
    }
    return root;
}
bool BinarySearchTree ::remove(int k)
{
    // print();
    bool res = false;

    root = remove2(root, k, res);
    size = size - 1;
    // print();
    return res;
}
