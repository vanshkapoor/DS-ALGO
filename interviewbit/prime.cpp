htness_4
// C++ program to print all primes 
// less than N 
#include <bits/stdc++.h> 
using namespace std; 
  
// function check whether a number 
// is prime or not 
bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 
  
// Function to print primes 
void printPrime(int n) 
{ 
    for (int i = 2; i <= n; i++) { 
        if (isPrime(i)) 
            cout << i << " "; 
    } 
} 
// Driver Code 
int main() 
{ 
    int n = 7; 
    printPrime(n); 
} 
