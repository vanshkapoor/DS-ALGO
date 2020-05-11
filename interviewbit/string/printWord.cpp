// print string in word form
// example = this is vansh
// output = 
// this
// is
// vansh

#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    // int ct=0;
    string word = "this is vansh";
    string s;
    stringstream iss(word);

    while(iss>>s)
    {
        cout<<s<<endl;
    }

    return 0;
}
