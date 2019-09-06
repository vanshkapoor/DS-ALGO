#include<iostream>

using namespace std;

int fib(int n)
{
   if(n ==0)
   {
    return 0;
   }
   if(n == 1)
  {
    return 1;
  }


   int sm1 = fib(n-1);
   int sm2 = fib(n-2);
   return sm1 + sm2;
}

int main()
{
   cout<<fib(3)<<endl;


return 0;
}
