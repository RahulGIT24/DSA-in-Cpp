// Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists a pair in the array whose sum is exactly x

#include <iostream>
using namespace std;
int main()
{
    int x = 2;
    int size = 5;
    int arr[size] = {3, 3, 2, 3, 1};
    int pairs = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                pairs++;
            }
        }
    }
    if (pairs != 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}