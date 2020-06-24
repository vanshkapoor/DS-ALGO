#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main()
{
    //creating map
    //parameter type it is
    unordered_map<string, int> Map;

    //inserting a pair 
    pair<string, int> p("abc",1);
    Map.insert(p); 
    //insert method 2
    Map["def"] = 2;

    //accessing
    cout<<Map["abc"]<<endl;
    cout<<Map["ghi"]<<endl; //it gives 0 after inserting at that key

    // cout<<Map.at("ghi")<<endl; //it will give error
    return 0;
}