#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include "channel.h"

using namespace std;

class SubsChannel : public Channel
{
protected:
    string subto;
    int price;

public:
    SubsChannel(string name, int base, int SD, int HD, int K, vector<string> locs, string substo, int price) : Channel(name, base, SD, HD, K, locs)
    {
        this->subto = substo;
        this->price = price;
    }
    void display()
    {
        cout << subto << " - "
             << "Price : " << price;
    }
};

// // if to assign only
// for (int i = 0; i < subs.size(); i++)
// {
// }
// subs.push_back(ch);

// // if upgrade
// for (int i = 0; i < subs.size(); i++)
// {
//     // check for location
//     // check for balance
//     //
// }