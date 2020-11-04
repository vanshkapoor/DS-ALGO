#include <iostream>
#include <fstream>
#include "LinkedSortedList.h"
#include "LinkedSortedList.cpp"

using namespace std;

bool readfile(LinkedSortedList *obj, int num)
{
    int cnt = 0;
    fstream file, file2;
    string lastname;
    string filename = "all.last.txt";
    file.open(filename.c_str());
    file2.open(filename.c_str());
    cout << endl;
    cout << endl;
    cout << endl;
    while (file >> lastname)
    {
        cnt++;
    }
    if (num > cnt || num % 6 != 0 || num % 20 != 0)
    {
        cout << "TOTAL NAMES IN OUR DB =>" << cnt << endl;
        cout << "Enter valid size less than DB records and order of 6 to 20." << endl;
        file.close();
        return 0;
    }
    file.close();

    cout << "------ DATA BASE RECORDS  ----" << endl;
    while (file2 >> lastname && num > 0)
    {
        cout << lastname << endl;
        // obj.push(lastname);
        num--;
    }
    cout << "TOTAL NAMES IN OUR DB =>" << cnt << endl
         << endl;
    file2.close();

    return 1;
}

int main()
{
    LinkedSortedList *obj = new LinkedSortedList();
    string lastval;

    // READING FROM FILE
    int num;
b:
    cout << "Enter Number of records to read(order of 6 and 20)" << endl;
    cin >> num;

    if (readfile(obj, num) == 0)
    {
        goto b;
    }

    // obj->check();
    // obj->insert("dbca");
    // obj->insert("abcd");
    // obj->insert("acbd");
    // obj->insert("vansh");
    // obj->getlast(lastval);
    // obj->print();
    // cout << endl;
    // obj->getlast(lastval);
    // obj->print();
    // cout << endl;
    // obj->getlast(lastval);
    // obj->print();
    // cout << endl;
    // obj->getlast(lastval);
    // obj->print();
    // cout << endl;
    // string returnvalue;
    // cout << obj->remove_nth_element_from_end(returnvalue, 2) << endl;
    obj->print();

    return 0;
}