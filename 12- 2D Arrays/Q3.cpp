//?? Given a 2D matrix with m rows and n columns containing integers, find and print the maximum value present in the array

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> m >> n;

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int val = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (val < arr[i][j])
            {
                val = arr[i][j];
            }
        }
    }

    cout << val;
    return 0;
}