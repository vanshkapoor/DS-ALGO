#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s = "vansh kapoor is my name";
    s += " ";
    string ns;
    int n = s.length();
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            cout << ns << endl;
            ns = "";
            k++;
        }
        else
        {
            ns += s[i];
        }
    }

    return 0;
}