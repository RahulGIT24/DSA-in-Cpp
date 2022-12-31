// Merge two arrays into and store it into a new array in a sorted order


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void mergeArray(int arr[], int arr2[], int arr3[], int n, int n2)
{
    int i = 0, k = 0, j = 0;
    // Transverse arr and storing it's element to arr3
    while (i < n)
    {
        arr3[k++] = arr[i++];
    }

    // Transverse arr2 and storing it's element to arr3
    while (j < n2)
    {
        arr3[k++] = arr2[j++];
    }

    // Sorting Array
    sort(arr3, arr3 + n + n2);
}
int main()
{
    // Defining 1st array and it's size
    int arr[] = {1, 3, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Defining 2nd array and it's size
    int arr2[] = {31, 2, 1, 64, 7};
    int n2 = sizeof(arr) / sizeof(arr2[0]);

    int arr3[n + n2];
    mergeArray(arr, arr2, arr3, n, n2);

    // Printing merged array
    for (int i = 0; i < n + n2; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}