#include<iostream>

using namespace std;

int edit_distance(string s, string t)
{
    if(s.size() == 0 || t.size() == 0)
    {
        return max(s.size(),t.size());
    }

    if(s[0] == t[0])
    {
        return edit_distance(s.substr(1),t.substr(1));
    }else{
        int x = edit_distance(s.substr(1),t)+1;
        int y = edit_distance(s,t.substr(1))+1;
        int z = edit_distance(s.substr(1),t.substr(1))+1;

        return min(x, min(y,z));
    }



}


int main()
{
    edit_distance();


    return 0;
}