#include <iostream>
#include <fstream>
#include "LinkedSortedList.h"
#include "LinkedSortedList.cpp"

using namespace std;

int main()
{
    char ch;
    int cnt = 10;
    fstream file, file2;
    string word;

    string filename = "all.last.txt";
    file.open(filename.c_str());

    LinkedSortedList *obj = new LinkedSortedList();
a:
    cout << "Enter number of lastnames to read" << endl;
    cin >> cnt;
    if (cnt % 6 != 0 && cnt % 20 != 0)
    {
        goto a;
    }
    cout << "LASTNAMES DATABASE ENTERED : " << endl
         << endl;
    while (file >> word && cnt > 0)
    {

        cout << word;
        obj->insert(word);
        cnt--;
        cout << endl;
    }
    file.close();
    cout << "FILE CLOSED" << endl
         << endl;
    // obj->check();
    cout << "WOULD YOU LIKE TO PRINT OUR LINKEDLIST (y/n)" << endl;
    cin >> ch;
    if (ch == 'y')
    {
        obj->print();
    }
    ch = 'n';
    cout << endl;
    cout << endl;

    // insertion code
    cout << "TESTING INSERTION" << endl;
    cout << "ADDED VALUE = DBCA, ABCD, ACBD" << endl;
    obj->insert("DBCA");
    obj->insert("ABCD");
    obj->insert("ACBD");
    cout << "VALUES INSERTED" << endl
         << endl;
    cout << "WOULD YOU LIKE TO PRINT OUR LINKEDLIST (y/n)" << endl;
    cin >> ch;
    if (ch == 'y')
    {
        obj->print();
    }
    ch = 'n';

    // deletion code
lastval:
    cout << endl
         << endl;
    cout << "TESTING GETLAST,  DELETING LAST VALUE FROM LINKEDLIST AND DISPLAYING IT" << endl;
    string lastval;
    obj->getlast(lastval);
    cout << "LAST VALUE DELETED= " << lastval << endl
         << endl;
    cout << "WOULD YOU LIKE TO DELLETE LAST VALUE AGAIN (y/n)" << endl;
    cin >> ch;
    if (ch == 'y')
    {
        goto lastval;
    }
    cout << endl
         << endl;
    cout << "PRINTING LINKED LIST" << endl;
    obj->print();
    cout << endl
         << endl;

    // REMOVING nTH node
    cout << "ENTER nth NODE TO DELETE FROM END FROM OUR DATA SIZE i.e," << obj->size() << " : ";
    int nth;
    string returnvalue;
    cin >> nth;
    cout << obj->remove_nth_element_from_end(returnvalue, nth) << endl;
    cout << "REMOVED VALUE = " << returnvalue << endl
         << endl;

    cout << "PRINTING LINKED LIST :" << endl
         << endl;
    obj->print();
    cout << endl;
    cout << endl;
    // obj->clear();

    // cout << endl;
    // obj->getlast(lastval);
    // obj->print();
    // cout << endl;
    // obj->getlast(lastval);
    // obj->print();
    // cout << endl;
    // obj->getlast(lastval);
    // obj->print();
    //
    cout << "CREATING SECOND LINKED LIST" << endl;
    LinkedSortedList *obj2 = new LinkedSortedList();
    // obj2->insert("V");
    // obj2->insert("B");
    // obj2->insert("A");
    // obj2->insert("AA");
    // // cout<<endl;
    file.open(filename.c_str());


x:
    cout << "Enter number of lastnames to read" << endl;
    cin >> cnt;
    if (cnt % 6 != 0 && cnt % 20 != 0)
    {
        goto x;
    }
    cout << "LASTNAMES DATABASE ENTERED : " << endl
         << endl;
    while (file >> word && cnt > 0)
    {

        cout << word;
        obj2->insert(word);
        cnt--;
        cout << endl;
    }
    file.close();
    cout << "FILE CLOSED" << endl
         << endl;

    cout << "SECOND LINKED LIST :" << endl;
    obj2->print();
    cout << endl
         << endl
         << endl;

    cout << "MERGEING THE 2 LINKED LISTS" << endl;
    cout << "LINKED LIST 1 : " << endl;
    obj->print();
    cout << endl;
    cout << "LINKED LIST 2 : " << endl;
    obj2->print();
    cout << endl
         << endl;
    cout << "AFTER MERGE" << endl;

    LinkedNode *obhead1 = obj->gethead();
    LinkedNode *obhead2 = obj2->gethead();
    // cout << obhead2->value;
    LinkedNode *res = MergeLinkedSortedList(obhead1, obhead2);
    LinkedSortedList *obj3 = new LinkedSortedList;
    obj3->updateHead(res);
    obj3->updateSize(obj,obj2);
    obj3->print();

    cout << endl;
    cout << "------------------ALL FUNCTIONS EXECUTED -------------------" << endl;
    return 0;
}
