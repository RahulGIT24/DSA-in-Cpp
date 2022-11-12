// Give an integer array sorted in non-decreasing order,return an array of the sequences of each number in non-decreasing array

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void sqSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int sq = arr[i] * arr[i];
        arr[i] = sq;
    }
    sort(arr, arr + size);
}
int main()
{
    int size = 5;
    int arr[size] = {-10, -3, 4, 5, 6};
    sqSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}