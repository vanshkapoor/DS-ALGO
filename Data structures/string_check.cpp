#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string s = "123.34";
    stringstream fs(s);
    float num;
    fs >> num;

    cout << num;
    int x = 0x000F;
    int y = 0x2222;
    cout << x&y;

    return 0;
}