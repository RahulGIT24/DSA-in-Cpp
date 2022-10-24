// Find the sum of digits of a given number

#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int num;
    cout << "Enter a digit: ";
    cin >> num;

    while (num != 0)
    {
        sum += (num % 10);
        // cout<<num%10<<endl;
        num /= 10;
    }
    cout << "The sum of the digits were: " << sum;
    return 0;
}