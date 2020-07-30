#include <iostream>

using namespace std;

void fns(int num)
{
    if (num == 10)
    {
        return;
    }
    cout << "1- " << num;
    cout << endl;
    // num++;
    fns(num + 1);
    cout << "2 -" << num;
    cout << endl;
}

int main()
{

    fns(3);

    return 0;
}