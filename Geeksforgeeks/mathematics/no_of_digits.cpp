// ip : 12321 
// op : 5

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n = 12321;
    int count = 0;



// METHOD 1:
    while(n!=0)
    {
        count++;
        n = n/10;
    }
    cout<<count<<endl;

// METHOD 2:
    int num = 12321;
   cout<<floor(log10(num) + 1);


    return 0;
}