//? Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s

#include <iostream>
using namespace std;


int main()
{
    int row, col;
    cin >> row >> col;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    int maxOnes = INT_MIN;
    int maxRows = -1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 1)
            {
                int numberOfOnes = col - j;
                if (numberOfOnes > maxOnes)
                {
                    maxOnes = numberOfOnes;
                    maxRows = i;
                }
                break;
            }
        }
    }

    cout << maxRows;

    return 0;
}