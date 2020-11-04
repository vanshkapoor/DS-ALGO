#include <iostream>
#include <fstream>
#include "LinkedSortedList.h"
#include "LinkedSortedList.cpp"

using namespace std;

int main()
{
    char ch;
    int cnt = 10;
    fstream file;
    string word;

    string filename = "all.last.txt";
    file.open(filename.c_str());

    LinkedSortedList *obj = new LinkedSortedList();
a:
    cout << "Enter number of lastnames to read" << endl;
    cin >> cnt;
    if (cnt % 6 != 0 || cnt % 20 != 0)
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
    cout << "ADDED VALUE = dbca, abcdb, acbd" << endl;
    obj->insert("dbca");
    obj->insert("abcd");
    obj->insert("acbd");
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
    cout << "PRINTING LINKEDLIST";
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

    cout << "PRINTING LINKEDLIST :" << endl
         << endl;
    obj->print();
    cout << endl;
    cout << endl;
    obj->clear();

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
    // LinkedSortedList *obj2 = new LinkedSortedList();
    // obj2->insert("a");
    // obj2->insert("v");
    // obj2->insert("c");
    // obj2->insert("b");
    // cout<<endl;
    // obj2->print();
    // //LinkedSortedList * res= MergeLinkedSortedList();
    // cout<<endl;

    //
    // cout << endl;
    // obj->print();
    //res->print();
    return 0;
}
