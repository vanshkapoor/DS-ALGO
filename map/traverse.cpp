#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<string, int> map;
    map["a"]=1;
    map["b"]=4;
    map["c"]=2;

    unordered_map<string,int>::iterator it = map.begin();
    while(it != map.end())
    {
        cout<<"key = "<<it->first<<"value = "<<it->second;
        it++;


        // map.erase(it);
        // map.erase(it,it+4); 0,1,2,3,4 deleted
    }

    return 0;
}