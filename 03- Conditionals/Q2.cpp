// Write a program to find the absolute value of a number

#include <iostream>
using namespace std;
int main()
{
    int num1, absolute;
    cout << "Enter a number: ";
    cin >> num1;
    if (num1 < 0)
    {
        absolute = num1 * -1;
        cout << "The absolute value of " << num1 << " is " << absolute;
    }
    else
    {
        cout << "The absolute value of " << num1 << " is " << num1;
    }

    return 0;
}