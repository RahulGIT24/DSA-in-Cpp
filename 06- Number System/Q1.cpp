// Print the sum of first five decimal numbers in binary format

#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum += i;
    }
    int ans = 0, pow = 1;
    while (sum != 0)
    {
        int partyDigit = sum % 2;
        ans += partyDigit * pow;
        pow *= 10;
        sum /= 2;
    }
    cout<<ans;
    return 0;
}