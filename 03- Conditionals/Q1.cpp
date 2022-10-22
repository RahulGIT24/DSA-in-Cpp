// Write a program which takes two numbers input from user and checks whether it is a sqaure or not

#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter 1st side: ";
    cin >> x;
    cout << "Enter 2nd side: ";
    cin >> y;

    if (x == y)
    {
        cout << "It is square";
    }
    else
    {
        cout << "It is a rectangle";
    }

    return 0;
}