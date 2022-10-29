#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a decimal Number: ";
    cin >> n;
    int ans = 0;
    int power = 1;
    while (n != 0)
    {
        int parityDigit = n % 2;
        ans += parityDigit * power;
        power *= 10;
        n /= 2;
    }
    cout << ans;
    return 0;
}