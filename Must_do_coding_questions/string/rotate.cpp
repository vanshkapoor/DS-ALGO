#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str = "vansh";
    rotate(str.begin(), str.begin() + 2, str.end());
    cout << str << endl;
    cout << str.substr(1);

    return 0;
}