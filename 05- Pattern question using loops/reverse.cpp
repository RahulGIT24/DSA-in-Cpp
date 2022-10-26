// Write a program to reverse a integer

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a digit: ";
    cin >> n;

    cout << "Integer before reverse " << n << "\n";

    cout << "Integer after reverse ";

    while (n != 0)
    {
        cout << n % 10;
        n /= 10;
    }

    return 0;
}