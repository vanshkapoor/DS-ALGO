#include <iostream>

using namespace std;

int main()
{
    string str("vansh");

    for (auto i = 0; i < str.size(); i++)
    {
        cout << str[i];
    }

    cout << endl;

    for (auto &ch : str)
    {
        cout << ch << endl;
    }

    return 0;
}