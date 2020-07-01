#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int calculate_sum(int (*s)(int, int))
{
    for (int i = 0; i < 5; i++)
    {
        cout << (*s)(i, i + 1) << endl;
    }
}

int main()
{

    calculate_sum(sum);

    return 0;
}