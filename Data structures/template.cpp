#include <iostream>

using namespace std;

template <class X>
X sum(X a, X b)
{
    return a + b;
}

int main()
{
    int a = 10, b = 20;

    cout << sum(a, b) << endl;
    cout << sum(10.2, 20.4);

    return 0;
}