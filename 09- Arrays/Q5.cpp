// Given an integer array and its size, reverse the array and print it .

#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
int main()
{
    int arr[5] = {12, 45, 32, 6, 89};
    reverse(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}