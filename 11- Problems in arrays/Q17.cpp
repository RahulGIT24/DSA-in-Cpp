// Check if two subarrays with equal sum, Check that prefix sum of a part of the array is equal to the suffix sum of the rest of the array

#include <iostream>
using namespace std;
bool checkSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int prefix_sum = 0;
    for (int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        int suffix_sum = sum - prefix_sum;

        if (suffix_sum == prefix_sum)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n = 5;
    int arr[n] = {6, 2, 4, 3, 1};

    cout << checkSum(arr, n) << endl;
    return 0;
}