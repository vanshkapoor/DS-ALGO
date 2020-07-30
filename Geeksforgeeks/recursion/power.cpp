// count of no to calculate sum

#include <iostream>
#include <math.h>

using namespace std;

int powersum(int num)
{
    if (sqrt(num) - floor(sqrt(num)))
    {
        return 1;
    }
    if (num <= 3)
    {
        return num;
    }

    int res = num;

    for (int x = 1; x < num; x++)
    {
        int temp = x * x;

        if (temp > num)
        {
            break;
        }
        else
        {
            res = min(res, 1 + powersum(num - res));
        }
    }
    return res;
}

int cnt = 0;

void totalpower(int num, int i)
{
    if (i * i == num)
    {
        cnt++;
        return;
    }
    if (i * i < num)
    {
        num = num - (i * i);
        if (num == 0)
        {
            cnt++;
            return;
        }
        else if (num < 0)
        {
            return;
        }
    }

    for (int x = i + 1; x < num; x++)
    {
        int temp = x * x;
        if (temp < num)
        {
            totalpower(num, x);
        }
    }
    return;
}

int totalpowerutil(int num)
{
    if (num <= 3)
    {
        return -1; //no unique number
    }

    for (int i = 1; i <= sqrt(num); i++)
    {
        totalpower(num, i);
    }
    cout << cnt;
}

int main()
{
    int num = 10;

    cout << powersum(num);

    cout << totalpowerutil(num);

    return 0;
}