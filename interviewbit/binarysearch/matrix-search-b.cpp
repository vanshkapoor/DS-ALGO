#include<iostream>

using namespace std;

int main()
{
    int ct=0;
    int m = A.size();
    int C = A[0].size();
    
    for(int i=0;i<m;i++)
    {
        if(A[i][C] > B)
        {
            if(A[i][C] == B){
                return 1;
            }
            int beg=0;
            int end = A[0].size()-1;
            
            while(beg<=end)
            {
                int mid = (beg+end)/2;
                if(A[i][mid] == B)
                {
                    return 1;
                }else if(A[i][mid] > B)
                {
                    end = mid-1;
                }else{
                    beg=mid+1;
                }
            }
        }
    }

    return 0;
}