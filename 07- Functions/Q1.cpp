// Write a function to print squares of first 5 natural numbers

#include <iostream>
using namespace std;
int square(int num)
{
    return num * num;
};
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        int sq = square(i);
        cout << "The square of " << i << " is " << sq << endl;
    }

    return 0;
}