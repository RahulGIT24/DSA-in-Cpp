#include <iostream>
using namespace std;
void newFunc(int &z)
{
    z = 100;
    cout << z << endl;
}
int main()
{
    int a = 5;
    newFunc(a); // Value of a will be 100 now
    cout << a;
    return 0;
}