#include <iostream>

using namespace std;

void increment(int **p)
{
    cout << p << endl;
    p = p + 1;
}

void increment2(int **p)
{
    cout << *p << endl;
    *p = *p + 1;
}

void increment3(int **p)
{
    cout << **p << endl;
    **p = **p + 1;
}

void checkIncrement(int *p)
{
    cout << *p << endl;
    *p = *p + 1;
}

int main()
{
    int i = 10;
    int *p = &i;
    int **p2 = &p;

    cout << "i =" << i << "p = " << p << "p2 = " << p2 << endl;

    // checkIncrement(p);

    // increment(p2);
    // increment2(p2);
    increment3(p2);

    cout << "i =" << i << "p = " << p << "p2 = " << p2 << endl;

    return 0;
}