#include <iostream>
using namespace std;
int i = 9; // Global variable
int b; // Global variable default value will be zero
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl; // Here i is local variable accessible in this block only
    }
    cout << i<<endl;
    int a;  // local variable default value will be a garbage value
    cout<<a<<endl;
    cout<<b;
    return 0;
}