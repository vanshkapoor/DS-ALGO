#include <iostream>
#include <bits/stdc++.h>
#include "Employee.cpp"
#include "BinarySearchTree.cpp"

using namespace std;

BinarySearchTree *root = new BinarySearchTree();

void readFile(int n)
{
    // HERE:
    // create employee object
    // add that employee to binary tree node
    if (n < 20 || n > 50)
    {
        cout << "Enter no of records  between 20 to 50 only ";
        int p = 0;
        cin >> p;
        readFile(p);
        return;
    }
    fstream file;
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
    string word;
    int total_cnt = 0;

    while (file >> word && n > 0)
    {

        cout << word << "     ";
        cnt++;
        if (cnt == 3)
        {
            cout << endl;
            cnt = 0;
            total_cnt++;
            n--;
        }
    }

    // while (n-- > 0)
    // {
    //     string firstname;
    //     string lastname;
    //     int id;

    //     file >> firstname;
    //     file >> lastname;
    //     file >> id;
    //     cout << firstname << "     " << lastname << "    " << id;
    //     Employee e(id, lastname, firstname);
    //     root->insert(e);
    //     cout << endl;
    //     cnt++;
    // }
    cout << endl;
    cout << "TOTAL RECORD COUNT = " << total_cnt << endl;
    file.close();
}

int main()
{

    int n;
    cout << "Enter the number of records to be read from the database";
    cin >> n;
    readFile(n);
    //  readFile(n, root);
    Employee e(10, "sharma", "kaushal");
    //e.printPersonObj();
    root->insert(e);
    //root->print();

    Employee e2(5, "kapoor", "VANSH");
    Employee e3(3, "kapoor", "VANSH");
    Employee e4(6, "kapoor", "VANSH");
    Employee e5(12, "kapoor", "VANSH");

    //e.printPersonObj();
    root->insert(e2);
    root->insert(e3);
    root->insert(e4);
    root->insert(e5);

    root->print();
    cout << endl;
    root->remove(15);
    root->print();
    cout << endl;

    cout << "SIZE = " << root->BSTsize();

    // STEP 1 : read employee records and create BST from it
    // STEP 2 : display BST inorder
    // STEP 3 : INSERT employee record and store it in BST
    // STEP 4 : DELETE employee record from BST
    // STEP 5 : SEARCH employee record in BST

    return 0;
}
