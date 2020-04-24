#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<string, int> map;

    // insert 
    pair<string, int> p("vansh",1);
    map.insert(p);
// OR
    map["kapoor"]=2;

    cout<<map["vansh"]<<endl; 
    cout<<map.size();

    return 0;
}