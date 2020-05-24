#include <iostream>

using namespace std;

int main()
{
    string str = "abcde";
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i + 1; j++)
        {
            // if(str[i] =='a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            // {
            //     cout<<i<<" - "<<j<<" :  "<<str.substr(i,j)<<endl;
            // }else{
            //     break;
            // }
            cout << str.substr(i, j) << endl;
        }
    }

    return 0;
}