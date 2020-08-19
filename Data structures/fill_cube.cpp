#include <stdio.h>
#include <iostream>
#include <cmath>
//#include <string.h>

using namespace std;

int main()
{
    int n;
    int c = 0;
    string str;
    cin >> n;
    //scanf("%d", n);

    for (int i = 0; i < n; i++)
    {
        //scanf("%s",str);
        getline(cin, str);
        int cnt = 0;
        int a = str.length();
        for (int j = 0; j < a; j++)
        {

            if (str[j] == 'D')
            {
                cnt += 1;
            }
        }
        c += cnt;
    }

    c = floor(sqrt(c));
    //printf("%d",c);
    cout << c;

    return 0;
}