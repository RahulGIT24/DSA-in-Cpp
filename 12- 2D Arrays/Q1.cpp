//? Write a program to display multiplication of two matrices entered by user

#include <iostream>
using namespace std;
int main()
{

    //* Taking matrices input from user for A
    int r1, c1;
    cin >> r1 >> c1;

    //* Defining 2D array
    int A[r1][c1];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }

    //* Taking matrices input from user for B
    int r2, c2;
    cin >> r2 >> c2;
    int B[r2][c2];

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }

    //* r1 and c2 should be equal
    if (r1 != c2)
    {
        cout << "Matrix multiplication not possible for this input" << endl;
    }

    //* Answer Matrix
    int C[r1][c2];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int value = 0;
            for (int k = 0; k < r1; k++)
            {
                value += A[i][k] * B[k][j];
            }
            C[i][j] = value;
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}