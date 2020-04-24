#include <bits/stdc++.h>
#include<iostream> 
using namespace std;  
  
/* function to get factorial of n */
int fact(int n);  
  
void printRepeating(int arr[], int size)  
{  
    int S = 0; /* S is for sum of elements in arr[] */
    int P = 1; /* P is for product of elements in arr[] */
    int x, y; /* x and y are two repeating elements */
    int D; /* D is for difference of x and y, i.e., x-y*/
    int n = size - 2, i;  
      
    /* Calculate Sum and Product of all elements in arr[] */
    for(i = 0; i < size; i++)  
    {  
        S = S + arr[i];  
        P = P*arr[i];  
    }      
          
    S = S - n*(n+1)/2; /* S is x + y now */
    P = P/fact(n);     /* P is x*y now */
          
    D = sqrt(S*S - 4*P); /* D is x - y now */
          
    x = (D + S)/2;  
    y = (S - D)/2;  
          
    cout<<"The two Repeating elements are "<<x<<" & "<<y;  
}  
  
int fact(int n)  
{  
    return (n == 0)? 1 : n*fact(n-1);  
}  
  
// Driver code 
int main()  
{  
    int arr[] = {4, 2, 5, 2, 3, 1};  
    int arr_size = sizeof(arr)/sizeof(arr[0]);  
    printRepeating(arr, arr_size);  
    return 0;  
}  