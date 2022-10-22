// Write a program to check whether two numbers entered by user and equal or not

#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter 1st number: ";
    cin >> x;
    cout << "Enter 2nd number: ";
    cin >> y;
    cout << (x == y) ? 1 : 0;
    return 0;
}