#include <iostream>
#include <bits/stdc++.h>
#include "Employee.cpp"
#include "BinarySearchTree.cpp"

using namespace std;

int total_cnt = 0;

void readFile()
{
    // TO DO HERE:
    // create employee object
    // add that employee to binary tree node

    fstream file;
    string word;
    int cnt = 0;
    string filename = "Small-Database.txt";
    file.open(filename.c_str());
    cout << endl;
    cout << endl;
    cout << "------ DATA BASE FILE ----" << endl;
    cout << endl;
    cout << endl;
    cout << "FIRSTNAME  -  LASTNAME  - ID" << endl;
    cout << endl;
    while (file >> word)
    {

        cout << word << "     ";
        cnt++;
        if (cnt == 3)
        {
            cout << endl;
            cnt = 0;
            total_cnt++;
        }
    }
    cout << endl;
    cout << "TOTAL RECORD COUNT = " << total_cnt << endl;
    file.close();
}

int main()
{

    // STEP 1 : read employee records and create BST from it
    // STEP 2 : display BST inorder
    // STEP 3 : INSERT employee record and store it in BST
    // STEP 4 : DELETE employee record from BST
    // STEP 5 : SEARCH employee record in BST

    return 0;
}