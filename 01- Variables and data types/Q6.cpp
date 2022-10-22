// Swap two numbers

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    a=90;
    b=89;
    cout<<"Before Swapping\n";
    cout<<"a = "<<a<<"\n";
    cout<<"b = "<<b<<"\n";

    // Swapping Numbers here
    c = a;
    a = b;
    b = c;
    cout<<"After Swapping\n";
    cout<<"a = "<<a<<"\n";
    cout<<"b = "<<b<<"\n";
return 0;
}