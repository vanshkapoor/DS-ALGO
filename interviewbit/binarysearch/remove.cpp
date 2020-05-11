// remove element from cpp in o(1) space
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 4, 5, 4, 2};

    int m = 9; //size of array

    int i = 0;
    int B = 2; //remove element
    while (i < 9)
    {
        if (arr[i] == B)
        {
            break;
        }
        i++;
    }

    if (i == 9)
    {
        cout << "no element found";
        return 0;
    }

    int j = i + 1;

    while (j < 9)
    {
        if (arr[j] != B)
        {
            arr[i] = arr[j];
            i++;
        }
        j++;
    }

    while (i < 9)
    {
        arr.pop_back();
        i++;
    }

    return 0;
}