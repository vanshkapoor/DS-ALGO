#include <iostream>

using namespace std;

void permute(string &s, int i, int n)
{
    if (i == n)
    {
        cout << s << endl;
        return;
    }

    for (int j = i; j < n; j++)
    {
        swap(s[j], s[i]);
        permute(s, i + 1, n);
        swap(s[j], s[i]);
    }
}

int main()
{
    string s = "vansh";
    int n = s.length();
    permute(s, 0, n);

    return 0;
}