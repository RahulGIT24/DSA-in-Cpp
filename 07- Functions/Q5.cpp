// Given two numbers print all prime numbers between them

#include <iostream>
using namespace std;
bool prime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        if (prime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}