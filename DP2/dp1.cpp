#include<iostream>

using namespace std;

int m=4;
int min_step(int i,int j, int **arr)
{
    if( (i==m-1)&&(j==m-1))
    {
        return arr[i][j];
    }

    if( i>=m || j>=m)
    {
        return INT16_MAX;
    }
    
    int x = min_step(i,j+1,arr);
    int y = min_step(i+1,j,arr);
    int z = min_step(i+1,j+1,arr);

    int ans =  min(x,min(y,z)) + arr[i][j];
    return ans; 

}

int min_step_dp(int m, int n, int **input)
{
    int **ans = new int*[m];
    for(int i=0;i<m;i++)
    {
        ans[i] = new int[n];
    }   


    ans[m-1][n-1] = input[m-1][n-1];

    // for last row
    for(int i=m-2;i>=0;i--)
    {
        ans[m][i] += ans[m][i+1];
    }

    // for last colum
    for(int i=m-2;i>=0;i--)
    {
        ans[i][m] += ans[i+1][m];
    }

    // filling rest
    for(int i=m-1;i>0;i--)
    {
        for(int j=m-2;j>0;j--)
        {
            ans[i][j] = input[i][j] + min(ans[i][j+1], min(ans[i+1][j+1], ans[i+1][j])); 
        }
    }


}



int main()
{
    int arr[m][m]={{1,3,4,2},{5,8,6,7},{9,6,4,3},{0,3,5,7}};
    cout<<min_step(0,0,arr);

    return 0;
}