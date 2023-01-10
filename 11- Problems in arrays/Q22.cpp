//* Count the total number of negative positive and zeroe's in an array
#include <iostream>
using namespace std;
int main()
{
    // Declaring variables
    int negative = 0;
    int positive = 0;
    int zeroes = 0;

    // Declaring array
    int array[8] = {1, 0, -9, 4, -33, 3, 56, 0};

    for (int i = 0; i < 8; i++)
    {
        // Condition to check numbers less than 0
        if (array[i] < 0)
        {
            negative++;
        }
        // Condition to check numbers more than 0
        if (array[i] > 0)
        {
            positive++;
        }
        // Condition to check numbers equal to 0
        if (array[i] == 0)
        {
            zeroes++;
        }
    }
    cout << "Number of positive integers " << positive<<endl;
    cout << "Number of negative integers " << negative<<endl;
    cout << "Number of zeroes " << zeroes<<endl;
    return 0;
}