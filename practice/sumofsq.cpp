//minimum no needed to find sum of squares such that it is equal to n

#include<iostream>
#include<cmath>

using namespace std; 
  
// Returns count of minimum squares that sum to n 
int getMinSquares(unsigned int n) 
{ 

    if (sqrt(n) - floor(sqrt(n)) == 0) 
        return 1; 
    if (n <= 3) 
        return n; 
  
    int res = n; 
    for (int x = 1; x <= n; x++) { 
        int temp = x * x; 
        if (temp > n) 
            break; 
        else
            res = min(res, 1 + getMinSquares(n - temp)); 
    } 
    return res; 
} 


int main() 
{ 
    cout << getMinSquares(6); 
    return 0; 
} 