// Find the sum of the following series (1-2+3-4.....n)

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a digit: ";
    cin >> num;
    int sum = 0;
    while (num != 0)
    {
        int a = num % 10;
        if (a % 2 == 0)
            sum -= a;
        else
            sum += a;
        num /= 10;
    }
    cout << sum;
    return 0;
}
