//  Factorial of 5 is 120. Number of digits in 120 is 3 (1, 2, and 0).

#include<iostream>
using namespace std;


int findDigits(int N)
{
// FORMULA : floor(log(n!))+1;

if(N==0){return 0;}
if(N==1){return 1;}

double digits = 0;

for(int i=2;i<=N;i++)
{
    digits += log10(i);
}

return floor(digits)+1;
}


int main()
{
    int N;
    cin>>N;

    cout<<findDigits(N);

    return 0;
}