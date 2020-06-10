#include <iostream>

using namespace std;

void subset(string str, int i, string curr)
{
    if (i == str.length())
    {
        cout << curr << endl;
        return;
    }

    subset(str, i + 1, curr + str[i]);
    subset(str, i + 1, curr);
}

int main()
{
    string str = "vansh";
    string curr = "";

    subset(str, 0, curr);

    return 0;
}