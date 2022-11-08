// Find the second largest element in a given array

#include <iostream>
using namespace std;
int largestElementIndex(int arr[], int size)
{
    int max = INT_MIN;
    int maxIndex = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex=i;
        }
    }
    return maxIndex;
}
int main()
{
    int array[] = {2,3,5,7,6,1,7};
    int IndexOfLargestelement = largestElementIndex(array,6);

    array[IndexOfLargestelement] = -1;

    int IndexOfSecondLargestelement = largestElementIndex(array,6);
    cout<<array[IndexOfSecondLargestelement]<<endl;
    return 0;
}