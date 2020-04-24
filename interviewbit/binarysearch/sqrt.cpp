#include<iostream>
#include<math.h>

using namespace std;

int main()
{
   if (A==0 || A==1) return A;
    int start = 0, end = A;
    int ans;
    while(start<=end)
    {
        int mid = (start + end)/2;
        if (mid <= A/mid)  //mid*mid <= A
        {
            start = mid + 1;
            ans = mid;
        }
        else 
            end = mid - 1;
    }

    cout<<ans;
    // return ans;
    return 0;
}