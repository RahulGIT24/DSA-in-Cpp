// Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists a pair in the array whose absolute difference is exactly x.

#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int x = 10;
    int ans = 0;
    int arr[n] = {1, 12, 0, 4, 23};
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] - arr[j] == x || arr[i] - arr[j] == -x)
            {
                ans++;
            }
        }
    }
    if (ans != 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}