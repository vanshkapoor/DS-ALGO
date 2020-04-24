#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // vector<vector<int> > Solution::prettyPrint(int A) {
    int size, temp, limit, i, j;
    int A=3;
    size = 2*A-1;
    limit = size;
    temp = 0;

    vector<vector<int> > mat(size, vector<int>(size));

    while(A > 0){
        for(i = temp; i < limit; i++){
            for(j = temp; j < limit; j++){
                mat[i][j] = A;
            }
        }
        A--;
        limit--;
        temp++;
    }

    // return mat;
    
    




    return 0;
}