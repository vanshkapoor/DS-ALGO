// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find the subarray with given sum k
// arr: input array
// n: size of array
void subarraySum(int arr[], int n, int s){
    
    // Your code here
    // iterate from start 0
    // add in sum
    // 2 pointers on start and i'th
    // if sum<required : i++
    // else first ptr++, sum-arr[first]
    int head = 0;
    int sum = arr[0];
    
    for(int i=1;i<=n;i++)
    {
        while(sum>s && head<i-1)
        {
            sum = sum-arr[head];
            head++;
        }
        
        if(sum == s)
        {
            cout<<head+1<<" "<<i<<endl;
            return;
        }
        if(i<n)
            sum = sum+arr[i];
    }
    return ;
}

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        subarraySum(arr, n, s);
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends