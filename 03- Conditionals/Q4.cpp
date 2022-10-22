// Write a program to print positive integer entered by the user if a negative integer is entered it should be skipped

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0)
    {
        cout << "Please enter a positive integer";
    }
    else
    {
        cout << "Number entered by the user is " << num;
    }

    return 0;
}