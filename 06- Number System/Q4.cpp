// count the number of 1s

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    int ans = 0;
    int pow = 1;

    while (n != 0)
    {
        int partyDigit = n % 2;
        if (partyDigit == 1)
        {
            ans++;
        }

        n /= 2;
    }
    cout << "1's were: " << ans;
    return 0;
}