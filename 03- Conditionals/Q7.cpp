// Write a program to calculate grades

#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks < 100 && marks > 90)
    {
        cout << "You got A+ grade";
    }
    else if (marks < 90 && marks > 80)
    {
        cout << "You got A grade";
    }
    else if (marks < 80 && marks > 70)
    {
        cout << "You got B+ grade";
    }
    else if (marks < 70 && marks > 60)
    {
        cout << "You got B grade";
    }
    else if (marks < 60 && marks > 50)
    {
        cout << "You got C grade";
    }
    else if (marks < 50 && marks > 40)
    {
        cout << "You got D grade";
    }
    else if (marks < 40 && marks > 30)
    {
        cout << "You got E grade";
    }
    else
    {
        cout << "You got F grade";
    }

    return 0;
}