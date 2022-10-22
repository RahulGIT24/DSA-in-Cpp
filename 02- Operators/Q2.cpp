// Write a program to check whether first number is greater by 50 and by other number also

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    cout << (a > 50 && a > b) ? 1 : 0;
    return 0;
}