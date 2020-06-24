#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n = 14;
    string st = "";

    while (n >= 2)
    {
        int m = n % 2;
        std::string s = std::to_string(m);
        // st += std::to_string(n % 2);
        n = n / 2;
        // st += s;
        // string s = to_string(n);
        // cout << s;
        // st += s;
    }
    st += "1";
    reverse(str.begin(), str.end());
    cout << st;
    return 0;
}