// Find the number of odd and even numbers in an array

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 34, 67, 87, 4};
    int even = 0, odd = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Odd elements: " << odd << endl;
    cout << "Even elements: " << even;
    return 0;
}