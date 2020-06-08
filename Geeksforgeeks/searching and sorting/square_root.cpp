#include <iostream>
#include <cmath>

using namespace std;
int ans;

float square(int beg, int end, int org)
{
    if (beg <= end)
    {
        int mid = (beg + end) / 2;

        if (mid * mid == org)
        {
            return mid;
        }

        if (mid * mid < org)
        {
            ans = mid;
            square(mid, end, org);
        }
        else
        {
            ans = mid;
            square(beg, mid, org);
        }
    }
    // return ans;
}

int main()
{
    int num = 16;

    cout << square(1, num, num);

    return 0;
}