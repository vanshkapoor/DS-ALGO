#include <iostream>

using namespace std;

int main()
{
    bool flag = false;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            flag = false;
            if (i + j == 5)
            {
                flag = true;
                cout << "yes" << endl;
                break;
            }
        }
        if (flag == true)
        {
            cout << "check" << endl;
        }
    }
    return 0;
}