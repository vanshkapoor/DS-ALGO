#include <iostream>
using namespace std;

int cnt = 0;
void subset(string s, string sub)
{
    // cout << s << endl;

    // if (sub.length() == 0)
    // {
    //     return;
    // }
    if (s.length() == 0)
    {
        cnt++;
        cout << sub << endl;
        return;
    }

    subset(s.substr(1), sub);
    // cout << s << endl;
    subset(s.substr(1), sub + s[0]);
}

int main()
{

    string s = "vansh";
    string sub = "";

    subset(s, sub);
    cout << cnt;

    return 0;
}