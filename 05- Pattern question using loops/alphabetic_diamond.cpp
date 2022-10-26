// Write a program to print alphabetic diamond pattren

#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int alpha = 65;
    int num = 0;
    // upside pyramid
    for (int i = 1; i <= size; i++)
    {
        // Printing Spaces
        for (int j = size; j > i; j--)
        {
            cout << " ";
        }
        // Printing Alphabets
        for (int k = 1; k < (2 * i) - 1; k++)
        {
            cout << ((char)(alpha + num++));
        }
        // Set the number to 0
        num = 0;
        cout << "\n";
    }

    // Downside pyramid
    for (int i = 1; i <= size - 1; i++)
    {
        // Printing Spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // Printing Alphabets
        for (int k = (size - i) * 2 - 1; k > 0; k--)
        {
            cout << ((char)(alpha + num++));
        }
        // Set the number to 0
        num = 0;
        cout << "\n";
    }

    return 0;
}