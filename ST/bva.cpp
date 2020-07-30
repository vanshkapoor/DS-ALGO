#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    if (a == 0)
    {
        cout << "Not Quadratic";
    }
    float d = b * b - 4 * a * c;

    if (d == 0)
    {
        cout << "Equal roots";
    }
    else if (d < 0)
    {
        cout << "Imaginary roots";
    }
    else
    {
        cout << "Real roots";
    }

    return 0;
}