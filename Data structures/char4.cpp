#include <iostream>

using namespace std;

int main()
{
    cout << 'e' - 'a' << endl;
    string s = "vanshsubstr";
    string num = "12345";
    cout << num[0] << endl;
    cout << (int)num[1] - '0' << endl;
    cout << (int)'0' << endl;

    cout << s.substr(1, s.length());
    return 0;
}