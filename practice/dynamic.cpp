#include<iostream>

using namespace std;

int main()
{
    int *p = new int;
    *p = 10;
    delete p; //p stays at stack but heap storage is deleted
    p = new int;

    int *parr = new int[50];
    int n;
    cin>>n;
    int *arr = new int[n];
    arr[0] = 1;
    arr[1] = 2;
    delete [] arr;
    // arr[i] = *(arr + i)
    return 0;
}