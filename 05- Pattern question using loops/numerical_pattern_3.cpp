// Holo Rectangle numerical
#include <iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter columns: ";
    cin >> columns;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i == 1 || j == 1 || i == rows || j == columns)
            {
                cout << j;
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