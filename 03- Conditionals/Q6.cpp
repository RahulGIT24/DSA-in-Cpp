// Create a basic calculator using switch case

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char op;

    cout << "Enter the arithmetic operator: ";
    cin >> op;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << "The sum of" << num1 << " and " << num2 << " is " << num1 + num2;
        break;
    case '-':
        cout << "The difference of" << num1 << " and " << num2 << " is " << num1 - num2;
        break;
    case '*':
        cout << "The product of" << num1 << " and " << num2 << " is " << num1 * num2;
        break;
    case '/':
        cout << "The quotient of" << num1 << " and " << num2 << " is " << num1 / num2;
        break;
    case '%':
        cout << "The remainder of" << num1 << " and " << num2 << " is " << num1 % num2;
        break;

    default:
        cout << "Operator not available";
        break;
    }
    return 0;
}
