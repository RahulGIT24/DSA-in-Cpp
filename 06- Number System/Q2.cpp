// count the number of zeroes

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        int party = n % 2;
        if (party == 0)
        {
            count++;
        }
        n /= 2;
    }
    cout<<"The number of zeroes were "<<count;
    return 0;
}