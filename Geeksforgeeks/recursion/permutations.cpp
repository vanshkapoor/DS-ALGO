#include <iostream>
using namespace std;

void permutations(string &str, int s, int n, int &count)
{
    if (s == n)
    {
        cout << str << endl;
        count++;
    }
    else
    {
        for (int i = s; i < n; i++)
        {
            // 1. fix start
            swap(str[s], str[i]);
            // 2. recursive call
            permutations(str, s + 1, n, count);
            // 3. backtrack
            swap(str[s], str[i]);
        }
    }
}

int main()
{
    string str = "vansh"; //prefer strings in case of recursions
    int count = 0;
    permutations(str, 0, str.length(), count);
    cout << "COUNT =" << count;
    return 0;
}