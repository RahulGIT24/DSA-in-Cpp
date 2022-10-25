#include <iostream>
using namespace std;
int main()
{
    int row, columns;
    cout << "Enter row: ";
    cin >> row;
    cout << "Enter column: ";
    cin >> columns;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i == 1 || j == 1 || i == row || j == columns)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}