// Count the number of triplets whose sum is equal to the value x

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 1, 2, 4, 0, 6};
    int targetSum = 5;
    int triplets = 0;
    int size = 6;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == targetSum)
                {
                    triplets++;
                }
            }
        }
    }
    cout << triplets;
    return 0;
}