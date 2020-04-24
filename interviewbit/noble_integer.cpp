int Solution::solve(vector<int> &A) {
    int m=A.size();
    int p=0;
    int j;
    int largeFlag=0;
    // int solFlag=0;
    
    for(int i=0;i<m;i++)
    {
        p=A[i];
        j=i;  
        if(m-i-1==p)
        {
            largeFlag=0;
            while(j<m)
            {
                if(A[j]<p)
                {
                    largeFlag=1;
                }else if(A[j]>p){
                    largeFlag=2;
                }
                j++;
            }
            if(largeFlag==2){
                return 1;
            }
            
        }
    }
    return -1;
}
