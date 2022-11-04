// Find the maximum element of an array

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 12, 382, 42, 5};
    int max = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}