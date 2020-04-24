#include<iostream>

using namespace std;


int* performOps(int *A, int len, int *blen) {
    int i;
    *blen = len * 2;
    int *B = (int *)malloc((*blen) * sizeof(int));
    for (i = 0; i < len; i++) {
        B[i] = A[i];
        cout<<"-"<< (len - i) % len<<endl;
        B[i + len] = A[(len - i) % len];

    }
    return B;
}




int main()
{
int A[]={5,10,2,1};
int len = 4;
int blen; 
int *B = performOps(A, len, &blen);
int i;
for (i = 0; i < blen; i++) {
    printf("%d ", B[i]);
}


    return 0;
}