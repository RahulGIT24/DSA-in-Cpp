//? Write a program to display transpose of matrix entered by the rows

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int A[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    int transpose[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[i][j] = A[j][i];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << transpose[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}