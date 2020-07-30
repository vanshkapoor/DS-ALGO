#include <iostream>

using namespace std;

int calculateit(int limit, int ctr)
{
    static int num = 0;
    if (limit == 10)
    {
        return 0;
    }

    ctr++;
    num++;
    cout << "limit = " << limit << "num = " << num << endl;
    calculateit(limit + 1, ctr);
    return num;
}

int main()
{
    int num = calculateit(5, 0);
    cout << num << endl;
    cout << calculateit(5, 0);

    return 0;
}