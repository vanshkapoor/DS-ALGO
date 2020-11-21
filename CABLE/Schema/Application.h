
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include "customer.h"
#include "channel.h"

using namespace std;

class App
{
private:
    vector<Customer> users;
    vector<Channel> channels;
    int total;

public:
    App()
    {
        total = 0;
    }

    void addUser(Customer user)
    {
        for (int i = 0; i < users.size(); i++)
        {
            if (users[i].getName() == user.getName())
            {
                cout << "User already exists";
                return;
            }
        }
        users.push_back(user);
        total++;
        cout << "New User added successfully";
    }

    void GetOneChannelInfo(string ch)
    {
        for (int i = 0; i < channels.size(); i++)
        {
            if (channels[i].getName() == ch)
            {
                channels[i].showPlans();
            }
        }
    }

    void AddChannel()
    {
        string substep;
        string Chname;
        string username;
        cout << "Enter user name";
        cin >> username;
        for (int i = 0; i < users.size(); i++)
        {
            if (users[i].getName() == username)
            {
                users[i].getCurrentSubscriptions();
                cout << "Do you want to subscribe or upgrade (sub/upg)?";
                cin >> substep;
                cout << "Enter Channel name";
                cin >> Chname;
                if (substep == "sub")
                {
                    // get channels details
                    for (int j = 0; j < channels.size(); j++)
                    {
                        if (channels[j].getName() == Chname)
                        {
                            channels[j].showPlans();                               //show all plans
                            if (channels[j].checkLocation(users[i].getLocation())) //check if location matches
                            {
                                string packname;
                                cout << "Enter pack name";
                                cin >> packname;
                                // attaching the channel from list to users Subscribed channels list
                                users[i].assignSubs(channels[j], packname);
                            }
                            else
                            {
                                cout << "Your location Doesnt match with channels";
                                return;
                            }
                        }
                    }
                }
                else if (substep == "upg")
                {
                }
                else
                {
                    cout << "Exiting..";
                    return;
                }
            }
        }
        cout << "No user with this name";
    }
};