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

void fns2(int num)
{
    if (num == 10)
    {
        return;
    }
    num++;
    cout << "sender - " << num << endl;
    fns2(num);
    cout << "return - " << num;
}

int main()
{

    // fns(3);
    fns2(3);

    return 0;
}