#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include "../Schema/channel.h"

using namespace std;

int main()
{
    vector<string> locA{"delhi", "mumbai", "pune"};
    Channel objA("ABC", 20, 10, 40, 10, locA);
    Channel objB("ABC", 20, 10, 40, 10, locA);
    Channel objC("ABC", 20, 10, 40, 10, locA);

    return 0;
}