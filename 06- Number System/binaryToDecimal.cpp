#include <iostream>
using namespace std;
int main()
{
    int n;
    int decimal = 0;
    cout << "Enter a binary number: ";
    cin >> n;
    int pow = 1;
    while (n != 0)
    {
        int lastdigit = n % 10;
        decimal += (lastdigit * pow);
        pow *= 2;
        n /= 10;
    }
    cout << decimal;
    return 0;
}