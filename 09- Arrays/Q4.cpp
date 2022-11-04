// Find the sum of largest and smallest number in an array

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 34, 5, 6, 10};
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Smallest number: " << min << endl;
    cout << "Greatest number: " << max << endl;
    cout << "Sum will be: " << min + max << endl;
    return 0;
}