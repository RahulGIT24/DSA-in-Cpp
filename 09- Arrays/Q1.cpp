// Calculate the sum of all elements in the given array

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= length - 1; i++)
    {
        sum += arr[i];
    }
    cout << sum;
    return 0;
}