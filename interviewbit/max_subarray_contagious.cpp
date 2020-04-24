vector<int> Solution::maxset(vector<int> &A) {
    int m = A.size();
    int max_so_far=INT_MIN;
    int max_ending_here=0;
    int start=0,end=0,beg=0;
    for(int i=0;i<m;i++)
    {
        max_ending_here += A[i];
       
        if(max_ending_here<0)
        {
            max_ending_here=0;
            beg=i+1;
        }
        
         if(max_so_far<max_ending_here)
        {
            max_so_far=max_ending_here;
            start=beg;
            end=i;
         
        }   
        
    }
    
    vector<int>B;
    for(int i=start;i<=end;i++)
    {
        B.push_back(A[i]);
    }
    
    return B;
    
    
}