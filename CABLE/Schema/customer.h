#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <string.h>
#include "channel.h"
#include "SubsChannel.h"

using namespace std;

class Customer
{
private:
    string name; //unique characteristic here
    int balance;
    string location;
    vector<SubsChannel> subs;

public:
    Customer(string name, int balance, string location)
    {
        this->name = name;
        this->balance = balance;
        this->location = location;
    }

    bool assignSubs(Channel obj, string packname)
    {
        SubsChannel newSub(obj.getName(), obj.getBase(), obj.getSD(), obj.getHD(), obj.getK(), obj.getLocations(), packname, obj.getPackPrice(packname));
        subs.push_back(newSub);
    }

    string getName()
    {
        return name;
    }

    int getBalance()
    {
        return balance;
    }

    string getLocation()
    {
        return location;
    }

    Channel getCurrentSubscriptions()
    {
        cout << "Curently subscribed Channels :" << endl;
        for (int i = 0; i < subs.size(); i++)
        {
            subs[i].display();
        }
    }
};