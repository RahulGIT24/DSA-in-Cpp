#include <iostream>
using namespace std;
void add(int x = 0, int y = 0, int z = 0)
{ // Default parameters will be 0 here
    cout << x + y + z;
}
int main()
{
    add();
    return 0;
}