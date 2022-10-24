// Reverse a given digit

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Reverse of number:" << endl;
    while (num != 0)
    {
        cout << num % 10;
        num /= 10;
    }
    return 0;
}