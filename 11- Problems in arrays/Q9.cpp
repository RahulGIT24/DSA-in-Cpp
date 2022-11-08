// Given a vector arr[] sorted in increasing order of n size and an integer x, find the number of unique pairs that exist in the array whose absolute sum is exactly x.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;
    int targetSum = 7;
    int pairs = 0;

    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(0);
    arr.push_back(7);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == targetSum)
            {
                pairs++;
            }
        }
    }

    cout<<pairs;
    return 0;
}