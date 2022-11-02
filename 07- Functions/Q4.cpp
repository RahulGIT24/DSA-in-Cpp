// Given two numbers print all odd numbers between them

#include <iostream>
using namespace std;
void oddFunc(int a, int b)
{
    cout << "Numbers are: " << endl;
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    oddFunc(a, b);
    return 0;
}