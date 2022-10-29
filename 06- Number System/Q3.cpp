// Convert two binary numbers int decimal numbers and check which one is greater
#include <iostream>
using namespace std;
int main()
{
    int b1, b2;
    cout << "Enter 1st binary number: ";
    cin >> b1;
    cout << "Enter 2nd binary number: ";
    cin >> b2;
    int dec1 = 0, dec2 = 0;
    int pow = 1;
    while (b1 != 0)
    {
        int lastdigit = b1 % 10;
        dec1 += lastdigit * pow;
        b1 /= 10;
        pow *= 2;
    }
    pow = 1;
    while (b2 != 0)
    {
        int lastdigit = b2 % 10;
        dec2 += lastdigit * pow;
        b2 /= 10;
        pow *= 2;
    }

    if (dec1 > dec2)
    {
        cout << "The greater number is " << dec1;
    }
    else
    {
        cout << "The greater number is " << dec2;
    }

    return 0;
}