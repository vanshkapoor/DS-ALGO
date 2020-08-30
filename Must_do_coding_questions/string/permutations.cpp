#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void allpermutations(string &s, string &ns)
{
    if (s.size() == 0)
    {
        cout << ns << endl;
        return;
    }

    for (int j = 0; j < s.size(); j++)
    {
        allpermutations(s.substr(1), ns + s[0]);
        rotate(s.begin(), s.begin() + 1, s.end());
    }
}

void permutations(string s, int n)
{
    string ns = "";
    allpermutations(s, ns);
}

int main()
{
    string s = "vansh";
    permutations(s, s.size());

    return 0;
}