#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 4, 5, 6, 7};
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // cout << arr[4] << endl;

    // Another way to access elements
    // for (int i = 0; i <= size; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // Size operational array
    int size = sizeof(arr); // Returns size of memory taken by array in RAM
    cout<<size<<endl;

    // Length operation
    int length = sizeof(arr)/sizeof(arr[0]);
    cout<<length<<endl;
    return 0;
}