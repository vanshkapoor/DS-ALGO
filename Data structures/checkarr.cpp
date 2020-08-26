#include <iostream>
using namespace std;

void sum(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        arr[i]++;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    sum(arr);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i];
    }
}