// Calculate Profit and loss

#include <iostream>
using namespace std;
int main()
{
    int cp, sp;
    cout << "Enter cost price: ";
    cin >> cp;
    cout << "Enter selling price: ";
    cin >> sp;

    if (cp > sp)
    {
        cout << "You suffered a loss of " << cp - sp;
    }
    else
    {
        cout << "You earned a profit of " << sp - cp;
    }

    return 0;
}