//* Alternate

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

    int leftMostOne = -1;
    int maxOnesRow = -1;

    //! Finding leftmost one in 0th row

    int j = col;
    while (j >= 0 && arr[0][j] == 1)
    {
        leftMostOne = j;
        maxOnesRow = 0;
        j--;
    }

    //! Check in rest of rows if we can find a one left to leftMostONe

    for (int i = 0; i < row; i++)
    {
        while (j >= 0 && arr[i][j] == 1)
        {
            leftMostOne = j;
            maxOnesRow = i;
            j--;
        }
    }

    cout << maxOnesRow;
    return 0;
}