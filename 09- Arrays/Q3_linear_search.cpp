#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 9, 18, 10};
    int result = -1;
    int n;
    cout << "Enter a number to search: ";
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        if (n == arr[i])
            result = i;
    }
    if (result == -1)
        cout << result;

    else
        cout << "Element is present at index " << result;

    return 0;
}