#include <iostream>
#include <bits/stdc++.h>
#include "Employee.cpp"
#include "BinarySearchTree.cpp"

using namespace std;



void readFile( int n,  BinarySearchTree* root)
{
    // TO DO HERE:
    // create employee object
    // add that employee to binary tree node
    if(n<20||n>50){
    cout<<"Enter no of records  between 20 to 50 only ";
    int p=0;
    cin>>p;
    readFile(p, root);
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

    while (n-->0)
    { string firstname;
      string lastname;
      int id;

        file>>firstname;
        file>>lastname;
        file>>id;
        cout << firstname << "     "<<lastname<<"    "<<id;
        Employee e(id,lastname,firstname);
             root->insert(e);
             cout << endl;

            cnt++;


    }
    cout << endl;
    cout << "TOTAL RECORD COUNT = " << cnt << endl;
    file.close();
}

int main()
{

BinarySearchTree* root= new BinarySearchTree();

    int n;
    cout<<"Enter the number of records to be read from the database";
    cin>>n;
  //  readFile(n, root);
 Employee e(1, "sharma", "kaushal");
//e.printPersonObj();
root->insert(e);
//root->print();

Employee e2(2, "kapoor", "VANSH");
//e.printPersonObj();
root->insert(e2);
root->print();

    // STEP 1 : read employee records and create BST from it
    // STEP 2 : display BST inorder
    // STEP 3 : INSERT employee record and store it in BST
    // STEP 4 : DELETE employee record from BST
    // STEP 5 : SEARCH employee record in BST






    return 0;
}
