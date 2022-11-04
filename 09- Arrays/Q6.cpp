// Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of both 0 and n). Find and return the only number of the range that is not present in the array.

#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int missing = -1;
    int arr[] = {8, 6, 5, 4, 3, 2, 1, 0};
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    int range_sum = (length) * (length + 1) / 2;
    missing = range_sum - sum;
    cout << missing;
    return 0;
}