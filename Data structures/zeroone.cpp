#include <bits/stdc++.h>
#include <vector>

using namespace std;

int intsize = sizeof(int) * 8;

void zeronone(int no, int &zero, int &one)
{
    cout << "initial FUNCTION: " << zero << "-" << one << endl;

    while (no)
    {
        (no % 2 == 0) ? zero++ : one++;
        no /= 2;
    }
}

int main()
{
    int maxlength = 0;
    int n, m;
    vector<int> v;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m;
        v.push_back(m);
    }

    for (int i = 0; i < v.size(); i++)
    {
        int zero = 0;
        int one = 0;
        cout << "initial : " << zero << "-" << one << endl;
        zeronone(v[i], zero, one);
        maxlength = max(maxlength, (zero + one));
        cout << "final" << endl;
        cout << zero << " - " << one;
    }
    cout << "max = " << maxlength;
    return 0;
}