#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int nstart;
    int nend;
    cin >> nstart;
    cin >> nend;

    int numrange = 0;
    numrange = nend - nstart + 1;
    numrange = pow(numrange, 4);
    cout << numrange;

    return 0;
}