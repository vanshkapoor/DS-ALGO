#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::vector<int> v;

    int A = 1234;
    int product = 1;
    while (A)
    {
        product = product * (A % 10);
        v.insert(v.begin(), A % 10);
        A = A / 10;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}