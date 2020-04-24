#include<iostream>

using namespace std;

int main()
{
    int A[]={1,2,2,2,3,4,5,5,6};
    int beg=0;
    int B=2;
    // int end = A.size()/2;
    // int end = sizeof(A)/sizeof(A[0]);
    int end = 9;
    int mid = 0;
    int count=0;
    int FI = 0;
    int LI=0;
    while(beg <= end)
    {
        mid = (beg+end)/2;
        // cout<<mid;
        if(A[mid] == B)
        {
            FI = mid;
            LI=mid;
            // cout<<FI;
            if(A[mid-1] == B)
            {
                // cout<<mid-1;
                // break;
                while(A[mid]==B )
                {
                    mid = mid-1;
                    if(mid < 0){
                        break;
                    }
                    cout<<FI;    
                    FI = mid;
                }    

            }
            
            if(A[mid+1] == B)
            {
                // cout<<mid+1;
                // break;
               while(A[mid]==B)
                {
                    mid = mid+1;
                    if(mid>end)
                    {
                        break;
                    }
                    LI = mid;
                } 
            }
        }else if(A[mid] > B)
        {
            end = mid-1;
        }else
        {
            beg = mid+1;
        }
    }

    cout<<FI<<" "<<LI;

    
    return 0;
}



