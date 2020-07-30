#include <iostream>

using namespace std;

int main()
{
    int num[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string sym[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int i = 12;

    int numb = 3456; //<4000

    while (numb > 0)
    {
        int ch = numb / num[i];
        numb = numb % num[i];
        while (ch > 0)
        {
            cout << sym[i];
            ch--;
        }
        i--;
    }

    return 0;
}