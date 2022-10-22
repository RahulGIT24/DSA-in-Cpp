// Write a program to get sum of digits of a three digit number

#include <iostream>
using namespace std;
int main()
{
    int num, first, second, third, sum;
    num = 233;
    first = num / 100;
    num = num % 100;
    second = num / 10;
    third = num % 10;
    sum = first + second + third;
    cout << "Sum of number is: " << sum;
    return 0;
}