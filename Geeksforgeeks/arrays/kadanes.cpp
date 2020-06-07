// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int max_so_far = INT_MIN;
    int max_ending_here = 0;
    
    for(int i=0;i<n;i++)
    {
        max_ending_here = max_ending_here + arr[i];
        
        if(max_so_far<max_ending_here){
            max_so_far = max_ending_here;
        }
        if(max_ending_here<0)
        {
            max_ending_here  =0;
        }
    }
    return max_so_far;
}

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends