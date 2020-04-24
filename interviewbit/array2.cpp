// CPP program to print all subsets with given sum 
#include <bits/stdc++.h> 
#include<iostream>
#include<math.h>

using namespace std; 
     int flag=0;
    int m=0;
void subsetSums(int arr[], int l, int r,int power, int sum=0) 
{ 
    // Print current subset 
    if (l > r) 
    {   
        m++;
        cout << " ";
        if(sum == 0)
        {
            // cout<<"yes";
            // cout<<m;
            if(m != power)
            {
            flag++;
            }

        } 

        return ; 
    } 
  
 
  
    // Subset including arr[l] 
    subsetSums(arr, l+1, r,power, sum+arr[l]); 
  
    // Subset excluding arr[l] 
    subsetSums(arr, l+1, r,power, sum); 
    
   
} 
  
// Driver code 
int main() 
{ 
    int arr[] = {1, 3, 2, 3}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int power = pow(2,n);
  
    subsetSums(arr, 0, n-1, power); 
    // cout<<m;
     if(flag!=0)
        cout<<"yes";
    else
        cout<<"no";
    return 0; 
}