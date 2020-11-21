
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Channel
{

protected:
    string name;
    vector<string> locations;
    int base;
    int SD;
    int HD;
    int K;

public:
    Channel(string name, int base, int SD, int HD, int K, vector<string> locs)
    {
        this->name = name;
        this->SD = SD;
        this->HD = HD;
        this->K = K;
        for (int i = 0; i < locs.size(); i++)
        {
            locations.push_back(locs[i]);
        }
    }

    string getName()
    {
        return name;
    }
    int getBase()
    {
        return base;
    }
    int getSD()
    {
        return SD;
    }
    int getHD()
    {
        return HD;
    }
    int getK()
    {
        return K;
    }
    vector<string> getLocations()
    {
        return locations;
    }
    int getPackPrice(string packname)
    {
        switch (packname)
        {
        case "base":
            return base;
            break;
        case "SD":
            return SD;
            break;
        case "HD":
            return HD;
            break;
        case "4K":
            return K;
        }
    }

    void showPlans()
    {
        cout << endl;
        cout << "Channel Info : " << endl;
        cout << name << endl;
        cout << "Base = " << base;
        cout << "SD = " << SD;
        cout << "HD = " << HD;
        cout << "4K = " << K;
    }
    bool checkLocation(string loc)
    {
        for (int i = 0; i < locations.size(); i++)
        {
            if (locations[i] == loc)
            {
                return true;
            }
        }
        return false;
    }
};
