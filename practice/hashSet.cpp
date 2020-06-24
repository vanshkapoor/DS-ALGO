#include<iostream>

using namespace std;

int main()
{
    unordered_set <string> obj;
    obj.insert("");
    obj.find("find_it") == obj.end()      // if not found then this function returns end iterator

    return 0;
}