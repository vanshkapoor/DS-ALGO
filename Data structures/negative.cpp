#include <iostream>

using namespace std;

int main()
{
    int n = 2;
    cout << n << endl;
    cout << "size = " << sizeof(n) << endl;
    n--;
    n--;
    n--;
    n--;
    cout << n << endl;
    n -= 10036893000;
    cout << n << endl;

    cout << "size = " << sizeof(n) << endl;

    return 0;
}