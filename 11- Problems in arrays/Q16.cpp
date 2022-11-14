// Given an integers array return the prefix sum/running sum in the same array without creating a new array

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5,4,1,2,3};
    int n = 0;
    for (int i = 1; i < 5; i++)
    {
        arr[i] = arr[n]+arr[i];
        n++;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}