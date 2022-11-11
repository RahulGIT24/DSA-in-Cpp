// Copy one array to another

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 3, 4, 5, 6};
    int arr2[5];
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}