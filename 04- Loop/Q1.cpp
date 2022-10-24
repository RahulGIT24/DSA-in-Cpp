// Count the number of digits

#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    int num;
    cout << "Enter the number: ";
    cin >> num;

    // while (num != 0)
    // or
    while (num > 0)
    {
        count++;
        num /= 10;
    }
    cout << "The number of digits you entered is " << count;
    return 0;
}