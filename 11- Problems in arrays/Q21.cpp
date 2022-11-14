//  Given an integer array arr, return an array ans such that ans[i] is equal to the product of all the elements of arr except arr[i]

#include <iostream>
using namespace std;
void productArray(int arr[], int n)
{
    // Base Case
    if (n == 1)
    {
        cout << 0;
        return;
    }

    // Creating two temperory array
    int left[n]; 
    int right[n];

    // Creating the final array which will store the answer
    int prod[n]; 

    int i, j;

    // Left will always be 1
    left[0] = 1;

    // Right element always be 1
    right[n - 1] = 1;

    // Construct the left array
    for (i = 1; i < n; i++)
    {
        left[i] = arr[i - 1] * left[i - 1];
    }

    // Construct the right array
    for (j = n - 2; j >= 0; j--)
    {
        right[j] = arr[j + 1] * right[j + 1];
    }

    // Construct product array
    for (i = 0; i < n; i++)
    {
        prod[i] = left[i] * right[i];
    }

    // Print the product array
    for (i = 0; i < n; i++)
    {
        cout << prod[i] << " ";
    }
    return;
}
int main()
{
    int n = 4;
    int arr[n] = {1, 3, 5, 7};
    cout << "The product the array is: " << endl;
    productArray(arr, n);
    return 0;
}