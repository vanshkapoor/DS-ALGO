#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a = "vansh";
    sort(a.begin(), a.end());
    cout << a << endl;

    string s1 = "absdjkvuahdakejfnfauhdsaavasdlkj";
    string s2 = "djfladfhiawasdkjvalskufhafablsdkashlahdfa";
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s1.length() << endl;
    cout << s2.length() << endl;

    return 0;
}