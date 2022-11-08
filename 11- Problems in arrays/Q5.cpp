// Rotate the given array 'a' by k steps where k is non-negative

#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int k = 2;
    int n = 5;
    int ansArray[n];

    k = k % n;

    int j = 0;

    // Inseting last k elements
    for (int i = n - k; i < n; i++)
    {
        ansArray[j++] = array[i];
    }

    // Inseritng first n-k elements
    for (int i = 0; i <= k; i++)
    {
        ansArray[j++]=array[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<ansArray[i]<<" ";
    }
    cout<<endl;
    return 0;
}