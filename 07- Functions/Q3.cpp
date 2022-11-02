// Given the age of a person. Check whether he is eligible to vote or not

#include <iostream>
using namespace std;
void checkVote(int age)
{
    if (age >= 18)
    {
        cout << "You can vote";
    }
    else
    {
        cout << "You can't vote";
    }
}
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    checkVote(age);
    return 0;
}