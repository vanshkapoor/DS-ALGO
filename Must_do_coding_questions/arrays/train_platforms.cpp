#include <iostream>

using namespace std;

int main()
{
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int depart[] = {910, 1200, 1120, 1130, 1900, 2000};

    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 1;
    int j = 0;
    int max_platform = 1;
    int platforms_needed = 1;

    while (i < n)
    {
        /* code */
        if (arr[i] > depart[j])
        {
            j++;
            max_platform--;
        }
        else if (arr[i] < depart[j])
        {
            i++;
            max_platform++;
            platforms_needed = max(platforms_needed, max_platform);
        }
    }

    cout << platforms_needed;
    return 0;
}